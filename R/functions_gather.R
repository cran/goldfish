# # Goldfish package ----
# #
# # Author(s): AU
# #
# #
# # Description: Helper functions to gather the preprocess data for
# #   DyNAM-choice and DyNAM-choice-coordination


#' Gather preprocess data from a formula
#'
#' Preprocess is made with goldfish.
#'
#' @param formula accepted by goldfish. Left side a dependent events object
#' @param model Look to `goldfish::estimate` documentation. `c('DyNAM', 'REM')`
#' @param subModel `goldfish::estimate`. `c('choice_coordination', 'choice')`
#' @param preprocessArgs Additional preprocess arguments like `startTime`,
#'   `endTime` and `opportunitiesList`.
#' @param progress Default `FALSE`.
#'
#' @return a list with the data and relevant information.
#' @noRd
#'
#' @examples
#' data("Fisheries_Treaties_6070")
#' states <- defineNodes(states)
#' states <- linkEvents(states, sovchanges, attribute = "present")
#' states <- linkEvents(states, regchanges, attribute = "regime")
#' states <- linkEvents(states, gdpchanges, attribute = "gdp")
#'
#' bilatnet <- defineNetwork(bilatnet, nodes = states, directed = FALSE)
#' bilatnet <- linkEvents(bilatnet, bilatchanges, nodes = states)
#'
#' createBilat <- defineDependentEvents(
#'   events = bilatchanges[bilatchanges$increment == 1, ],
#'   nodes = states, defaultNetwork = bilatnet
#' )
#'
#' contignet <- defineNetwork(contignet, nodes = states, directed = FALSE)
#' contignet <- linkEvents(contignet, contigchanges, nodes = states)
#'
#' gatheredData <- GatherPreprocessing(
#'   createBilat ~ inertia(bilatnet) + trans(bilatnet) + tie(contignet)
#' )
GatherPreprocessing <- function(
  formula,
  model = c("DyNAM", "REM"),
  subModel = c("choice", "choice_coordination", "rate"),
  preprocessArgs = NULL,
  progress = getOption("progress")) {

  model <- match.arg(model)
  subModel <- match.arg(subModel)

  if (!is.null(preprocessArgs)) {
    parInit <- names(preprocessArgs) %in%
      c(
        "startTime", "endTime", "opportunitiesList"
      )

    if (any(!parInit)) {
      warning(
        "The parameter: ",
        paste(names(preprocessArgs)[!parInit], collapse = ", "),
        " is not recognized for the preprocessing. ",
        "See the documentation for the list of available parameters",
        call. = FALSE, immediate. = TRUE
      )
    }

    if (!is.null(preprocessArgs["opportunitiesList"]))
      warning(dQuote("GatherPreprocessing"), " doesn't implement yet the ",
              dQuote("opportunitiesList"), " functionality")
  }

  ### 1. PARSE the formula----
  parsedformula <- parseFormula(formula) # envir = as.environment(-1)
  rhsNames <- parsedformula$rhsNames
  depName <- parsedformula$depName
  hasIntercept <- parsedformula$hasIntercept
  windowParameters <- parsedformula$windowParameters

  # # C implementation doesn't have ignoreRep option issue #105
  if (any(unlist(parsedformula$ignoreRepParameter)))
    stop("gatherPreprocessing ",
         " doesn't support ignoreRep effects (GH issue #105)!",
         call. = FALSE, immediate. = TRUE)

  # Model-specific preprocessing initialization
  if (model %in% c("DyNAM", "DyNAMi") &&
      subModel %in% c("choice", "choice_coordination") &&
      parsedformula$hasIntercept) {
    warning("Model ", dQuote(model), " subModel ", dQuote(subModel),
            " ignores the time intercept.",
            call. = FALSE, immediate. = TRUE)
    parsedformula$hasIntercept <- FALSE
  }
  rightCensored <- parsedformula$hasIntercept

  # if (progress && !all(vapply(windowParameters, is.null, logical(1)))) {
  #   cat("Creating window objects in global environment.\n")
  # }

  ### 2. INITIALIZE OBJECTS: effects, nodes, and link objects----

  if (progress) cat("Initializing objects.\n")

  ## 2.0 Set isTwoMode to define effects functions
  # get node sets of dependent variable
  .nodes <- attr(get(parsedformula$depName), "nodes")

  # two-mode networks(2 kinds of nodes)
  if (length(.nodes) == 2) {
    .nodes2 <- .nodes[2]
    .nodes <- .nodes[1]
    isTwoMode <- TRUE
  } else {
    .nodes2 <- .nodes
    isTwoMode <- FALSE
  }

  ## 2.1 INITIALIZE OBJECTS for all cases: preprocessingInit or not
  # enviroment from which get the objects
  envir <- environment()

  effects <- createEffectsFunctions(
    parsedformula$rhsNames, model, subModel, envir = envir)
  # Get links between objects and effects for printing results
  objectsEffectsLink <- getObjectsEffectsLink(parsedformula$rhsNames)

  ## 2.2 INITIALIZE OBJECTS for preprocessingInit == NULL

  # Initialize events list and link to objects
  events <- getEventsAndObjectsLink(
    parsedformula$depName, parsedformula$rhsNames,
    .nodes, .nodes2, envir = envir)[[1]]
  # moved cleanInteractionEvents in getEventsAndObjectsLink
  eventsObjectsLink <- getEventsAndObjectsLink(
    parsedformula$depName, parsedformula$rhsNames,
    .nodes, .nodes2, envir = envir)[[2]]
  eventsEffectsLink <- getEventsEffectsLink(
    events, parsedformula$rhsNames, eventsObjectsLink)

  ## 3.2 PREPROCESS when preprocessingInit == NULL
  preprocessingStat <- preprocess(
    model = model,
    subModel = subModel,
    events = events,
    effects = effects,
    windowParameters = parsedformula$windowParameters,
    eventsObjectsLink = eventsObjectsLink, # for data update
    eventsEffectsLink = eventsEffectsLink,
    objectsEffectsLink = objectsEffectsLink, # for parameterization
    # multipleParameter = multipleParameter,
    nodes = .nodes,
    nodes2 = .nodes2,
    isTwoMode = isTwoMode,
    startTime = preprocessArgs[["startTime"]],
    endTime = preprocessArgs[["endTime"]],
    rightCensored = rightCensored,
    progress = progress
  )

  # # 3.3 additional processing to flat array objects
  allowReflexive <- isTwoMode
  dimensions <- dim(preprocessingStat$initialStats)

  nParams <- dimensions[3] + parsedformula$hasIntercept

  reduceMatrixToVector <- FALSE
  reduceArrayToMatrix <- FALSE
  modelTypeCall <- "NON-VALID"

  if (model == "REM") {
    if (!parsedformula$hasIntercept) {
      modelTypeCall <- "REM-ordered"
    } else {
      modelTypeCall <- "REM"
    }
  } else if (model == "DyNAM") {
    if (subModel == "rate" && !parsedformula$hasIntercept) {
      modelTypeCall <- "DyNAM-M-Rate-ordered"
      reduceMatrixToVector <- TRUE
    } else if (subModel == "rate") {
      modelTypeCall <- "DyNAM-M-Rate"
      reduceMatrixToVector <- TRUE
    } else if (subModel == "choice_coordination") {
      modelTypeCall <- "DyNAM-MM"
    } else {
      modelTypeCall <- "DyNAM-M"
      reduceArrayToMatrix <- TRUE
    }
  }

  if (modelTypeCall == "NON-VALID") stop("Invalid model", modelTypeCall)

  # from estimate_c_init
  preprocessingStat <- modifyStatisticsList(
    preprocessingStat, modelTypeCall,
    reduceMatrixToVector = reduceMatrixToVector,
    reduceArrayToMatrix = reduceArrayToMatrix,
    excludeParameters = NULL,
    addInterceptEffect = parsedformula$hasIntercept
  )

  nEvents <- length(preprocessingStat$orderEvents) # number of events
  nodes <- get(.nodes)
  nodes2 <- get(.nodes2)

  ## SET VARIABLES BASED ON STATSLIST
  twomode_or_reflexive <- (allowReflexive || isTwoMode)
  n_events <- length(preprocessingStat$orderEvents)
  n_parameters <- dimensions[3]
  n_actors1 <- dimensions[1]
  n_actors2 <- nActors <- dimensions[2]

  ## CONVERT UPDATES INTO THE FORMAT ACCEPTED BY C FUNCTIONS
  temp <- convert_change(preprocessingStat$dependentStatsChange)
  stat_mat_update <- temp$statMatUpdate
  stat_mat_update_pointer <- temp$statMatUpdatePointer
  if (parsedformula$hasIntercept) {
    stat_mat_update[3, ] <- stat_mat_update[3, ] + 1
  }
  # Convert the right-censored events
  # which will be a zero matrice and a zero vector if there's no right-censored event
  if (length(preprocessingStat$rightCensoredIntervals) == 0) {
    stat_mat_rightcensored_update <- matrix(0, 4, 1)
    stat_mat_rightcensored_update_pointer <- numeric(1)
  } else {
    temp <- convert_change(preprocessingStat$rightCensoredStatsChange)
    stat_mat_rightcensored_update <- temp$statMatUpdate
    stat_mat_rightcensored_update_pointer <- temp$statMatUpdatePointer
    if (parsedformula$hasIntercept) {
      stat_mat_rightcensored_update[3, ] <- stat_mat_rightcensored_update[3, ] + 1
    }
  }

  ## CONVERT COMPOSITION CHANGES INTO THE FORMAT ACCEPTED BY C FUNCTIONS
  compChangeName1 <- attr(nodes, "events")["present" == attr(nodes, "dynamicAttribute")]
  compChangeName2 <- attr(nodes2, "events")["present" == attr(nodes2, "dynamicAttribute")]
  if (!is.null(compChangeName1) && length(compChangeName1) > 0) {
    temp <- get(compChangeName1)
    temp <- sanitizeEvents(temp, nodes)
    temp <- C_convert_composition_change(temp, unlist(preprocessingStat$eventTime))
    presence1_update <- temp$presenceUpdate
    presence1_update_pointer <- temp$presenceUpdatePointer
  } else {
    presence1_update <- matrix(0, 0, 0)
    presence1_update_pointer <- numeric(1)
  }

  if (!is.null(compChangeName2) && length(compChangeName2) > 0) {
    temp <- get(compChangeName2)
    temp <- sanitizeEvents(temp, nodes2)
    temp <- C_convert_composition_change(temp, unlist(preprocessingStat$eventTime))
    presence2_update <- temp$presenceUpdate
    presence2_update_pointer <- temp$presenceUpdatePointer
  } else {
    presence2_update <- matrix(0, 0, 0)
    presence2_update_pointer <- numeric(1)
  }

  if (!is.null(nodes$present)) {
    presence1_init <- nodes$present
  } else {
    presence1_init <- rep(TRUE, nrow(nodes))
  }

  if (!is.null(nodes2$present)) {
    presence2_init <- nodes2$present
  } else {
    presence2_init <- rep(TRUE, nrow(nodes2))
  }

  ## CONVERT TYPES OF EVENTS AND TIMESPANS INTO THE FORMAT ACCEPTED BY C FUNCTIONS
  is_dependent <- (as.numeric(unlist(preprocessingStat$orderEvents)) == 1)
  timespan <- numeric(length(is_dependent))
  timespan[is_dependent] <- as.numeric(unlist(preprocessingStat$intervals))
  timespan[(!is_dependent)] <- as.numeric(unlist(preprocessingStat$rightCensoredIntervals))

  ## CONVERT INFOS OF SENDERS AND RECEIVERS INTO THE FORMAT ACCEPTED BY C FUNCTIONS
  event_mat <- t(matrix(c(unlist(preprocessingStat$eventSender), unlist(preprocessingStat$eventReceiver)), ncol = 2))

  ## CONVERT THE INITIALIZATION OF DATA MATRIX INTO THE FORMAT ACCEPTED BY C FUNCTIONS
  stat_mat_init <- matrix(0, n_actors1 * n_actors2, n_parameters)
  for (i in 1:n_parameters) {
    stat_mat_init[, i] <- t(preprocessingStat$initialStats[, , i])
  }

  gatheredData <- gather_(
    modelTypeCall = modelTypeCall,
    event_mat = event_mat,
    timespan = timespan,
    is_dependent = is_dependent,
    stat_mat_init = stat_mat_init,
    stat_mat_update = stat_mat_update,
    stat_mat_update_pointer = stat_mat_update_pointer,
    stat_mat_rightcensored_update = stat_mat_rightcensored_update,
    stat_mat_rightcensored_update_pointer = stat_mat_rightcensored_update_pointer,
    presence1_init = presence1_init,
    presence1_update = presence1_update,
    presence1_update_pointer = presence1_update_pointer,
    presence2_init = presence2_init,
    presence2_update = presence2_update,
    presence2_update_pointer = presence2_update_pointer,
    n_actors1 = n_actors1,
    n_actors2 = n_actors2,
    twomode_or_reflexive = twomode_or_reflexive,
    verbose = progress, # If not silent, output the progress of data gathering
    impute = FALSE
  )

  ### 4. PREPARE PRINTING----
  # functions_utility.R
  effectDescription <-
    GetDetailPrint(objectsEffectsLink, parsedformula)
  hasWindows <- attr(effectDescription, "hasWindows")

  namesEffects <- CreateNames(effectDescription, sep = "_", joiner = "_")

  gatheredData$namesEffects <- namesEffects
  colnames(gatheredData$stat_all_events) <- namesEffects

  return(gatheredData)
}

#' Generate names for statistics effects
#'
#' Using the names data frame from `goldfish` generate compact names to the
#' columns for data frame or matrix
#'
#' @param names data frame from `goldfish`
#' @param sep string. Separator between different arguments and objects
#' @param joiner string. Separator to join multiple object names
#'
#' @return a string vector with the names.
#' @noRd
#'
#' @examples
#' names <- cbind(Object = c("bilatnet", "bilatnet", "contignet"),
#'                Weighted = c("W", "", "W"))
#' rownames(names) <- c("inertia", "trans", "tie")
#' CreateNames(names, sep = "|")
CreateNames <- function(
  names, sep = " ", joiner = ", ") {

  isObjectD <- grepl("Object \\d+", colnames(names))
  if (any(isObjectD)) {
    object <- apply(names[, isObjectD], 1,
                    function(z) {
                      ret <- Filter(function(w) !is.na(w) & w != "", z)
                      ret <- paste(ret, collapse = joiner)
                      return(ret)
                      })
    newNames <- c("Object", colnames(names)[!isObjectD])
    names <- cbind(object, names[, !isObjectD])
    colnames(names) <- newNames
  }

  if ("fixed" %in% colnames(names)) {
    names[, "fixed"] <- ifelse(names[, "fixed"] == "TRUE", "Fx", "")
  }

  names <- cbind(effect = rownames(names), names)
  nombres <- apply(names, 1,
                   function(z) {
                     ret <- Filter(function(w) !is.na(w) & w != "", z)
                     ret <- paste(ret, collapse = sep)
                     return(ret)
                     })
  names(nombres) <- NULL

  return(nombres)
}
