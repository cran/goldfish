## -----------------------------------------------------------------------------
indeg(network,
  isTwoMode = FALSE, weighted = FALSE, window = Inf,
  ignoreRep = FALSE, type = c("alter", "ego"), transformFun = identity
)


## -----------------------------------------------------------------------------
outdeg(network,
  isTwoMode = FALSE, weighted = FALSE, window = Inf,
  ignoreRep = FALSE, type = c("alter", "ego"), transformFun = identity
)


## -----------------------------------------------------------------------------
nodeTrans(network,
  isTwoMode = FALSE, window = Inf, ignoreRep = FALSE,
  type = c("alter", "ego"), transformFun = identity
)


## -----------------------------------------------------------------------------
ego(attribute, isTwoMode = FALSE)


## -----------------------------------------------------------------------------
alter(attribute, isTwoMode = FALSE)


## -----------------------------------------------------------------------------
tertius(network, attribute,
  isTwoMode = FALSE, window = Inf,
  ignoreRep = FALSE, type = c("alter", "ego"), transformFun = identity,
  aggregateFun = function(x) mean(x, na.rm = TRUE)
)


## -----------------------------------------------------------------------------
tie(network,
  weighted = FALSE, window = Inf, ignoreRep = FALSE,
  transformFun = identity
)


## -----------------------------------------------------------------------------
inertia(network, weighted = FALSE, window = Inf, transformFun = identity)


## -----------------------------------------------------------------------------
recip(network,
  weighted = FALSE, window = Inf, ignoreRep = FALSE,
  transformFun = identity
)


## -----------------------------------------------------------------------------
same(attribute)


## -----------------------------------------------------------------------------
diff(attribute, transformFun = abs)


## -----------------------------------------------------------------------------
sim(attribute, transformFun = abs)


## -----------------------------------------------------------------------------
egoAlterInt(attribute = list(attribute1, attribute2))


## -----------------------------------------------------------------------------
tertiusDiff(network, attribute,
  isTwoMode = FALSE, weighted = FALSE,
  window = Inf, ignoreRep = FALSE, transformFun = abs,
  aggregateFun = function(x) mean(x, na.rm = TRUE)
)


## -----------------------------------------------------------------------------
trans(network, window = Inf, ignoreRep = FALSE, transformFun = identity)


## -----------------------------------------------------------------------------
cycle(network, window = Inf, ignoreRep = FALSE, transformFun = identity)


## -----------------------------------------------------------------------------
commonSender(network, window = Inf, ignoreRep = FALSE, transformFun = identity)


## -----------------------------------------------------------------------------
commonReceiver(network,
  window = Inf, ignoreRep = FALSE,
  transformFun = identity
)


## -----------------------------------------------------------------------------
four(network,
  isTwoMode = FALSE, window = Inf, ignoreRep = FALSE,
  transformFun = identity
)


## -----------------------------------------------------------------------------
mixedTrans(
  network = list(network1, network2), window = Inf,
  ignoreRep = FALSE, transformFun = identity
)


## -----------------------------------------------------------------------------
mixedCycle(
  network = list(network1, network2), window = Inf,
  ignoreRep = FALSE, transformFun = identity
)


## -----------------------------------------------------------------------------
mixedCommonSender(
  network = list(network1, network2), window = Inf,
  ignoreRep = FALSE, transformFun = identity
)


## -----------------------------------------------------------------------------
mixedCommonReceiver(
  network = list(network1, network2), window = Inf,
  ignoreRep = FALSE, transformFun = identity
)

