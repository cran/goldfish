// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// estimate_DyNAM_MM
List estimate_DyNAM_MM(const arma::vec& parameters, const arma::mat& dep_event_mat, const arma::mat& stat_mat_init, const arma::mat& stat_mat_update, const arma::vec& stat_mat_update_pointer, const arma::vec& presence1_init, const arma::mat& presence1_update, const arma::vec& presence1_update_pointer, const arma::vec& presence2_init, const arma::mat& presence2_update, const arma::vec& presence2_update_pointer, const int n_actors_1, const int n_actors_2, const bool twomode_or_reflexive, bool impute);
RcppExport SEXP _goldfish_estimate_DyNAM_MM(SEXP parametersSEXP, SEXP dep_event_matSEXP, SEXP stat_mat_initSEXP, SEXP stat_mat_updateSEXP, SEXP stat_mat_update_pointerSEXP, SEXP presence1_initSEXP, SEXP presence1_updateSEXP, SEXP presence1_update_pointerSEXP, SEXP presence2_initSEXP, SEXP presence2_updateSEXP, SEXP presence2_update_pointerSEXP, SEXP n_actors_1SEXP, SEXP n_actors_2SEXP, SEXP twomode_or_reflexiveSEXP, SEXP imputeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type parameters(parametersSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type dep_event_mat(dep_event_matSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type stat_mat_init(stat_mat_initSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type stat_mat_update(stat_mat_updateSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type stat_mat_update_pointer(stat_mat_update_pointerSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type presence1_init(presence1_initSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type presence1_update(presence1_updateSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type presence1_update_pointer(presence1_update_pointerSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type presence2_init(presence2_initSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type presence2_update(presence2_updateSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type presence2_update_pointer(presence2_update_pointerSEXP);
    Rcpp::traits::input_parameter< const int >::type n_actors_1(n_actors_1SEXP);
    Rcpp::traits::input_parameter< const int >::type n_actors_2(n_actors_2SEXP);
    Rcpp::traits::input_parameter< const bool >::type twomode_or_reflexive(twomode_or_reflexiveSEXP);
    Rcpp::traits::input_parameter< bool >::type impute(imputeSEXP);
    rcpp_result_gen = Rcpp::wrap(estimate_DyNAM_MM(parameters, dep_event_mat, stat_mat_init, stat_mat_update, stat_mat_update_pointer, presence1_init, presence1_update, presence1_update_pointer, presence2_init, presence2_update, presence2_update_pointer, n_actors_1, n_actors_2, twomode_or_reflexive, impute));
    return rcpp_result_gen;
END_RCPP
}
// estimate_DyNAM_choice
List estimate_DyNAM_choice(const arma::vec& parameters, const arma::mat& dep_event_mat, const arma::mat& stat_mat_init, const arma::mat& stat_mat_update, const arma::vec& stat_mat_update_pointer, const arma::vec& presence2_init, const arma::mat& presence2_update, const arma::vec& presence2_update_pointer, const int n_actors_1, const int n_actors_2, const bool twomode_or_reflexive, bool impute);
RcppExport SEXP _goldfish_estimate_DyNAM_choice(SEXP parametersSEXP, SEXP dep_event_matSEXP, SEXP stat_mat_initSEXP, SEXP stat_mat_updateSEXP, SEXP stat_mat_update_pointerSEXP, SEXP presence2_initSEXP, SEXP presence2_updateSEXP, SEXP presence2_update_pointerSEXP, SEXP n_actors_1SEXP, SEXP n_actors_2SEXP, SEXP twomode_or_reflexiveSEXP, SEXP imputeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type parameters(parametersSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type dep_event_mat(dep_event_matSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type stat_mat_init(stat_mat_initSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type stat_mat_update(stat_mat_updateSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type stat_mat_update_pointer(stat_mat_update_pointerSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type presence2_init(presence2_initSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type presence2_update(presence2_updateSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type presence2_update_pointer(presence2_update_pointerSEXP);
    Rcpp::traits::input_parameter< const int >::type n_actors_1(n_actors_1SEXP);
    Rcpp::traits::input_parameter< const int >::type n_actors_2(n_actors_2SEXP);
    Rcpp::traits::input_parameter< const bool >::type twomode_or_reflexive(twomode_or_reflexiveSEXP);
    Rcpp::traits::input_parameter< bool >::type impute(imputeSEXP);
    rcpp_result_gen = Rcpp::wrap(estimate_DyNAM_choice(parameters, dep_event_mat, stat_mat_init, stat_mat_update, stat_mat_update_pointer, presence2_init, presence2_update, presence2_update_pointer, n_actors_1, n_actors_2, twomode_or_reflexive, impute));
    return rcpp_result_gen;
END_RCPP
}
// estimate_DyNAM_rate
List estimate_DyNAM_rate(const arma::vec& parameters, const arma::mat& dep_event_mat, const arma::vec& timespan, const arma::vec& is_dependent, const arma::mat& stat_mat_init, const arma::mat& stat_mat_update, const arma::vec& stat_mat_update_pointer, const arma::mat& stat_mat_rightcensored_update, const arma::vec& stat_mat_rightcensored_update_pointer, const arma::vec& presence1_init, const arma::mat& presence1_update, const arma::vec& presence1_update_pointer, const arma::vec& presence2_init, const arma::mat& presence2_update, const arma::vec& presence2_update_pointer, const int n_actors_1, const int n_actors_2, const bool twomode_or_reflexive, bool impute);
RcppExport SEXP _goldfish_estimate_DyNAM_rate(SEXP parametersSEXP, SEXP dep_event_matSEXP, SEXP timespanSEXP, SEXP is_dependentSEXP, SEXP stat_mat_initSEXP, SEXP stat_mat_updateSEXP, SEXP stat_mat_update_pointerSEXP, SEXP stat_mat_rightcensored_updateSEXP, SEXP stat_mat_rightcensored_update_pointerSEXP, SEXP presence1_initSEXP, SEXP presence1_updateSEXP, SEXP presence1_update_pointerSEXP, SEXP presence2_initSEXP, SEXP presence2_updateSEXP, SEXP presence2_update_pointerSEXP, SEXP n_actors_1SEXP, SEXP n_actors_2SEXP, SEXP twomode_or_reflexiveSEXP, SEXP imputeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type parameters(parametersSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type dep_event_mat(dep_event_matSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type timespan(timespanSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type is_dependent(is_dependentSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type stat_mat_init(stat_mat_initSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type stat_mat_update(stat_mat_updateSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type stat_mat_update_pointer(stat_mat_update_pointerSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type stat_mat_rightcensored_update(stat_mat_rightcensored_updateSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type stat_mat_rightcensored_update_pointer(stat_mat_rightcensored_update_pointerSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type presence1_init(presence1_initSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type presence1_update(presence1_updateSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type presence1_update_pointer(presence1_update_pointerSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type presence2_init(presence2_initSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type presence2_update(presence2_updateSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type presence2_update_pointer(presence2_update_pointerSEXP);
    Rcpp::traits::input_parameter< const int >::type n_actors_1(n_actors_1SEXP);
    Rcpp::traits::input_parameter< const int >::type n_actors_2(n_actors_2SEXP);
    Rcpp::traits::input_parameter< const bool >::type twomode_or_reflexive(twomode_or_reflexiveSEXP);
    Rcpp::traits::input_parameter< bool >::type impute(imputeSEXP);
    rcpp_result_gen = Rcpp::wrap(estimate_DyNAM_rate(parameters, dep_event_mat, timespan, is_dependent, stat_mat_init, stat_mat_update, stat_mat_update_pointer, stat_mat_rightcensored_update, stat_mat_rightcensored_update_pointer, presence1_init, presence1_update, presence1_update_pointer, presence2_init, presence2_update, presence2_update_pointer, n_actors_1, n_actors_2, twomode_or_reflexive, impute));
    return rcpp_result_gen;
END_RCPP
}
// estimate_DyNAM_rate_ordered
List estimate_DyNAM_rate_ordered(const arma::vec& parameters, const arma::mat& dep_event_mat, const arma::mat& stat_mat_init, const arma::mat& stat_mat_update, const arma::vec& stat_mat_update_pointer, const arma::vec& presence1_init, const arma::mat& presence1_update, const arma::vec& presence1_update_pointer, const arma::vec& presence2_init, const arma::mat& presence2_update, const arma::vec& presence2_update_pointer, const int n_actors_1, const int n_actors_2, const bool twomode_or_reflexive, bool impute);
RcppExport SEXP _goldfish_estimate_DyNAM_rate_ordered(SEXP parametersSEXP, SEXP dep_event_matSEXP, SEXP stat_mat_initSEXP, SEXP stat_mat_updateSEXP, SEXP stat_mat_update_pointerSEXP, SEXP presence1_initSEXP, SEXP presence1_updateSEXP, SEXP presence1_update_pointerSEXP, SEXP presence2_initSEXP, SEXP presence2_updateSEXP, SEXP presence2_update_pointerSEXP, SEXP n_actors_1SEXP, SEXP n_actors_2SEXP, SEXP twomode_or_reflexiveSEXP, SEXP imputeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type parameters(parametersSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type dep_event_mat(dep_event_matSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type stat_mat_init(stat_mat_initSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type stat_mat_update(stat_mat_updateSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type stat_mat_update_pointer(stat_mat_update_pointerSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type presence1_init(presence1_initSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type presence1_update(presence1_updateSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type presence1_update_pointer(presence1_update_pointerSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type presence2_init(presence2_initSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type presence2_update(presence2_updateSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type presence2_update_pointer(presence2_update_pointerSEXP);
    Rcpp::traits::input_parameter< const int >::type n_actors_1(n_actors_1SEXP);
    Rcpp::traits::input_parameter< const int >::type n_actors_2(n_actors_2SEXP);
    Rcpp::traits::input_parameter< const bool >::type twomode_or_reflexive(twomode_or_reflexiveSEXP);
    Rcpp::traits::input_parameter< bool >::type impute(imputeSEXP);
    rcpp_result_gen = Rcpp::wrap(estimate_DyNAM_rate_ordered(parameters, dep_event_mat, stat_mat_init, stat_mat_update, stat_mat_update_pointer, presence1_init, presence1_update, presence1_update_pointer, presence2_init, presence2_update, presence2_update_pointer, n_actors_1, n_actors_2, twomode_or_reflexive, impute));
    return rcpp_result_gen;
END_RCPP
}
// estimate_REM
List estimate_REM(const arma::vec& parameters, const arma::mat& dep_event_mat, const arma::vec& timespan, const arma::vec& is_dependent, const arma::mat& stat_mat_init, const arma::mat& stat_mat_update, const arma::vec& stat_mat_update_pointer, const arma::mat& stat_mat_rightcensored_update, const arma::vec& stat_mat_rightcensored_update_pointer, const arma::vec& presence1_init, const arma::mat& presence1_update, const arma::vec& presence1_update_pointer, const arma::vec& presence2_init, const arma::mat& presence2_update, const arma::vec& presence2_update_pointer, const int n_actors_1, const int n_actors_2, const bool twomode_or_reflexive, bool impute);
RcppExport SEXP _goldfish_estimate_REM(SEXP parametersSEXP, SEXP dep_event_matSEXP, SEXP timespanSEXP, SEXP is_dependentSEXP, SEXP stat_mat_initSEXP, SEXP stat_mat_updateSEXP, SEXP stat_mat_update_pointerSEXP, SEXP stat_mat_rightcensored_updateSEXP, SEXP stat_mat_rightcensored_update_pointerSEXP, SEXP presence1_initSEXP, SEXP presence1_updateSEXP, SEXP presence1_update_pointerSEXP, SEXP presence2_initSEXP, SEXP presence2_updateSEXP, SEXP presence2_update_pointerSEXP, SEXP n_actors_1SEXP, SEXP n_actors_2SEXP, SEXP twomode_or_reflexiveSEXP, SEXP imputeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type parameters(parametersSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type dep_event_mat(dep_event_matSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type timespan(timespanSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type is_dependent(is_dependentSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type stat_mat_init(stat_mat_initSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type stat_mat_update(stat_mat_updateSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type stat_mat_update_pointer(stat_mat_update_pointerSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type stat_mat_rightcensored_update(stat_mat_rightcensored_updateSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type stat_mat_rightcensored_update_pointer(stat_mat_rightcensored_update_pointerSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type presence1_init(presence1_initSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type presence1_update(presence1_updateSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type presence1_update_pointer(presence1_update_pointerSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type presence2_init(presence2_initSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type presence2_update(presence2_updateSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type presence2_update_pointer(presence2_update_pointerSEXP);
    Rcpp::traits::input_parameter< const int >::type n_actors_1(n_actors_1SEXP);
    Rcpp::traits::input_parameter< const int >::type n_actors_2(n_actors_2SEXP);
    Rcpp::traits::input_parameter< const bool >::type twomode_or_reflexive(twomode_or_reflexiveSEXP);
    Rcpp::traits::input_parameter< bool >::type impute(imputeSEXP);
    rcpp_result_gen = Rcpp::wrap(estimate_REM(parameters, dep_event_mat, timespan, is_dependent, stat_mat_init, stat_mat_update, stat_mat_update_pointer, stat_mat_rightcensored_update, stat_mat_rightcensored_update_pointer, presence1_init, presence1_update, presence1_update_pointer, presence2_init, presence2_update, presence2_update_pointer, n_actors_1, n_actors_2, twomode_or_reflexive, impute));
    return rcpp_result_gen;
END_RCPP
}
// estimate_REM_ordered
List estimate_REM_ordered(const arma::vec& parameters, const arma::mat& dep_event_mat, const arma::mat& stat_mat_init, const arma::mat& stat_mat_update, const arma::vec& stat_mat_update_pointer, const arma::vec& presence1_init, const arma::mat& presence1_update, const arma::vec& presence1_update_pointer, const arma::vec& presence2_init, const arma::mat& presence2_update, const arma::vec& presence2_update_pointer, const int n_actors_1, const int n_actors_2, const bool twomode_or_reflexive, bool impute);
RcppExport SEXP _goldfish_estimate_REM_ordered(SEXP parametersSEXP, SEXP dep_event_matSEXP, SEXP stat_mat_initSEXP, SEXP stat_mat_updateSEXP, SEXP stat_mat_update_pointerSEXP, SEXP presence1_initSEXP, SEXP presence1_updateSEXP, SEXP presence1_update_pointerSEXP, SEXP presence2_initSEXP, SEXP presence2_updateSEXP, SEXP presence2_update_pointerSEXP, SEXP n_actors_1SEXP, SEXP n_actors_2SEXP, SEXP twomode_or_reflexiveSEXP, SEXP imputeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type parameters(parametersSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type dep_event_mat(dep_event_matSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type stat_mat_init(stat_mat_initSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type stat_mat_update(stat_mat_updateSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type stat_mat_update_pointer(stat_mat_update_pointerSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type presence1_init(presence1_initSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type presence1_update(presence1_updateSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type presence1_update_pointer(presence1_update_pointerSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type presence2_init(presence2_initSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type presence2_update(presence2_updateSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type presence2_update_pointer(presence2_update_pointerSEXP);
    Rcpp::traits::input_parameter< const int >::type n_actors_1(n_actors_1SEXP);
    Rcpp::traits::input_parameter< const int >::type n_actors_2(n_actors_2SEXP);
    Rcpp::traits::input_parameter< const bool >::type twomode_or_reflexive(twomode_or_reflexiveSEXP);
    Rcpp::traits::input_parameter< bool >::type impute(imputeSEXP);
    rcpp_result_gen = Rcpp::wrap(estimate_REM_ordered(parameters, dep_event_mat, stat_mat_init, stat_mat_update, stat_mat_update_pointer, presence1_init, presence1_update, presence1_update_pointer, presence2_init, presence2_update, presence2_update_pointer, n_actors_1, n_actors_2, twomode_or_reflexive, impute));
    return rcpp_result_gen;
END_RCPP
}
// compute_coordination_selection
List compute_coordination_selection(arma::colvec& parameters, const arma::mat& stat_all_events, const arma::uvec& n_candidates, const arma::uvec& n_candidates1, const arma::uvec& n_candidates2, const arma::uvec& selected, const arma::uvec& selected_actor1, const arma::uvec& selected_actor2, const bool twomode_or_reflexive);
RcppExport SEXP _goldfish_compute_coordination_selection(SEXP parametersSEXP, SEXP stat_all_eventsSEXP, SEXP n_candidatesSEXP, SEXP n_candidates1SEXP, SEXP n_candidates2SEXP, SEXP selectedSEXP, SEXP selected_actor1SEXP, SEXP selected_actor2SEXP, SEXP twomode_or_reflexiveSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::colvec& >::type parameters(parametersSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type stat_all_events(stat_all_eventsSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type n_candidates(n_candidatesSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type n_candidates1(n_candidates1SEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type n_candidates2(n_candidates2SEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type selected(selectedSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type selected_actor1(selected_actor1SEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type selected_actor2(selected_actor2SEXP);
    Rcpp::traits::input_parameter< const bool >::type twomode_or_reflexive(twomode_or_reflexiveSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_coordination_selection(parameters, stat_all_events, n_candidates, n_candidates1, n_candidates2, selected, selected_actor1, selected_actor2, twomode_or_reflexive));
    return rcpp_result_gen;
END_RCPP
}
// compute_multinomial_selection
List compute_multinomial_selection(arma::colvec& parameters, const arma::mat& stat_all_events, const arma::uvec& n_candidates, const arma::uvec& selected);
RcppExport SEXP _goldfish_compute_multinomial_selection(SEXP parametersSEXP, SEXP stat_all_eventsSEXP, SEXP n_candidatesSEXP, SEXP selectedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::colvec& >::type parameters(parametersSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type stat_all_events(stat_all_eventsSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type n_candidates(n_candidatesSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type selected(selectedSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_multinomial_selection(parameters, stat_all_events, n_candidates, selected));
    return rcpp_result_gen;
END_RCPP
}
// compute_poisson_selection
List compute_poisson_selection(arma::colvec& parameters, const arma::mat& stat_all_events, const arma::uvec& n_candidates, const arma::uvec& selected, const arma::vec& timespan, const arma::vec& is_dependent);
RcppExport SEXP _goldfish_compute_poisson_selection(SEXP parametersSEXP, SEXP stat_all_eventsSEXP, SEXP n_candidatesSEXP, SEXP selectedSEXP, SEXP timespanSEXP, SEXP is_dependentSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::colvec& >::type parameters(parametersSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type stat_all_events(stat_all_eventsSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type n_candidates(n_candidatesSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type selected(selectedSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type timespan(timespanSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type is_dependent(is_dependentSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_poisson_selection(parameters, stat_all_events, n_candidates, selected, timespan, is_dependent));
    return rcpp_result_gen;
END_RCPP
}
// C_convert_composition_change
List C_convert_composition_change(const DataFrame& event, const arma::vec& reference_event_time);
RcppExport SEXP _goldfish_C_convert_composition_change(SEXP eventSEXP, SEXP reference_event_timeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const DataFrame& >::type event(eventSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type reference_event_time(reference_event_timeSEXP);
    rcpp_result_gen = Rcpp::wrap(C_convert_composition_change(event, reference_event_time));
    return rcpp_result_gen;
END_RCPP
}
// convert_composition_change
List convert_composition_change(const DataFrame& event, const DataFrame reference_event);
RcppExport SEXP _goldfish_convert_composition_change(SEXP eventSEXP, SEXP reference_eventSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const DataFrame& >::type event(eventSEXP);
    Rcpp::traits::input_parameter< const DataFrame >::type reference_event(reference_eventSEXP);
    rcpp_result_gen = Rcpp::wrap(convert_composition_change(event, reference_event));
    return rcpp_result_gen;
END_RCPP
}
// convert_change
List convert_change(const List& changeList);
RcppExport SEXP _goldfish_convert_change(SEXP changeListSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List& >::type changeList(changeListSEXP);
    rcpp_result_gen = Rcpp::wrap(convert_change(changeList));
    return rcpp_result_gen;
END_RCPP
}
// gather_receiver_model
List gather_receiver_model(const arma::mat& dep_event_mat, const arma::mat& stat_mat_init, const arma::mat& stat_mat_update, const arma::vec& stat_mat_update_pointer, const arma::vec& presence2_init, const arma::mat& presence2_update, const arma::vec& presence2_update_pointer, const int n_actor1, const int n_actor2, const bool twomode_or_reflexive, const bool verbose, const int impute);
RcppExport SEXP _goldfish_gather_receiver_model(SEXP dep_event_matSEXP, SEXP stat_mat_initSEXP, SEXP stat_mat_updateSEXP, SEXP stat_mat_update_pointerSEXP, SEXP presence2_initSEXP, SEXP presence2_updateSEXP, SEXP presence2_update_pointerSEXP, SEXP n_actor1SEXP, SEXP n_actor2SEXP, SEXP twomode_or_reflexiveSEXP, SEXP verboseSEXP, SEXP imputeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type dep_event_mat(dep_event_matSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type stat_mat_init(stat_mat_initSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type stat_mat_update(stat_mat_updateSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type stat_mat_update_pointer(stat_mat_update_pointerSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type presence2_init(presence2_initSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type presence2_update(presence2_updateSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type presence2_update_pointer(presence2_update_pointerSEXP);
    Rcpp::traits::input_parameter< const int >::type n_actor1(n_actor1SEXP);
    Rcpp::traits::input_parameter< const int >::type n_actor2(n_actor2SEXP);
    Rcpp::traits::input_parameter< const bool >::type twomode_or_reflexive(twomode_or_reflexiveSEXP);
    Rcpp::traits::input_parameter< const bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< const int >::type impute(imputeSEXP);
    rcpp_result_gen = Rcpp::wrap(gather_receiver_model(dep_event_mat, stat_mat_init, stat_mat_update, stat_mat_update_pointer, presence2_init, presence2_update, presence2_update_pointer, n_actor1, n_actor2, twomode_or_reflexive, verbose, impute));
    return rcpp_result_gen;
END_RCPP
}
// gather_sender_model
List gather_sender_model(const arma::mat& dep_event_mat, const arma::vec& is_dependent, const arma::mat& stat_mat_init, const arma::mat& stat_mat_update, const arma::vec& stat_mat_update_pointer, const arma::mat& stat_mat_rightcensored_update, const arma::vec& stat_mat_rightcensored_update_pointer, const arma::vec& presence1_init, const arma::mat& presence1_update, const arma::vec& presence1_update_pointer, const arma::vec& presence2_init, const arma::mat& presence2_update, const arma::vec& presence2_update_pointer, const int n_actors_1, const int n_actors_2, const bool twomode_or_reflexive, const bool verbose, bool impute);
RcppExport SEXP _goldfish_gather_sender_model(SEXP dep_event_matSEXP, SEXP is_dependentSEXP, SEXP stat_mat_initSEXP, SEXP stat_mat_updateSEXP, SEXP stat_mat_update_pointerSEXP, SEXP stat_mat_rightcensored_updateSEXP, SEXP stat_mat_rightcensored_update_pointerSEXP, SEXP presence1_initSEXP, SEXP presence1_updateSEXP, SEXP presence1_update_pointerSEXP, SEXP presence2_initSEXP, SEXP presence2_updateSEXP, SEXP presence2_update_pointerSEXP, SEXP n_actors_1SEXP, SEXP n_actors_2SEXP, SEXP twomode_or_reflexiveSEXP, SEXP verboseSEXP, SEXP imputeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type dep_event_mat(dep_event_matSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type is_dependent(is_dependentSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type stat_mat_init(stat_mat_initSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type stat_mat_update(stat_mat_updateSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type stat_mat_update_pointer(stat_mat_update_pointerSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type stat_mat_rightcensored_update(stat_mat_rightcensored_updateSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type stat_mat_rightcensored_update_pointer(stat_mat_rightcensored_update_pointerSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type presence1_init(presence1_initSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type presence1_update(presence1_updateSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type presence1_update_pointer(presence1_update_pointerSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type presence2_init(presence2_initSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type presence2_update(presence2_updateSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type presence2_update_pointer(presence2_update_pointerSEXP);
    Rcpp::traits::input_parameter< const int >::type n_actors_1(n_actors_1SEXP);
    Rcpp::traits::input_parameter< const int >::type n_actors_2(n_actors_2SEXP);
    Rcpp::traits::input_parameter< const bool >::type twomode_or_reflexive(twomode_or_reflexiveSEXP);
    Rcpp::traits::input_parameter< const bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< bool >::type impute(imputeSEXP);
    rcpp_result_gen = Rcpp::wrap(gather_sender_model(dep_event_mat, is_dependent, stat_mat_init, stat_mat_update, stat_mat_update_pointer, stat_mat_rightcensored_update, stat_mat_rightcensored_update_pointer, presence1_init, presence1_update, presence1_update_pointer, presence2_init, presence2_update, presence2_update_pointer, n_actors_1, n_actors_2, twomode_or_reflexive, verbose, impute));
    return rcpp_result_gen;
END_RCPP
}
// gather_sender_receiver_model
List gather_sender_receiver_model(const arma::mat& dep_event_mat, const arma::vec& is_dependent, const arma::mat& stat_mat_init, const arma::mat& stat_mat_update, const arma::vec& stat_mat_update_pointer, const arma::mat& stat_mat_rightcensored_update, const arma::vec& stat_mat_rightcensored_update_pointer, const arma::vec& presence1_init, const arma::mat& presence1_update, const arma::vec& presence1_update_pointer, const arma::vec& presence2_init, const arma::mat& presence2_update, const arma::vec& presence2_update_pointer, const int n_actors_1, const int n_actors_2, const bool twomode_or_reflexive, const bool verbose, const bool impute);
RcppExport SEXP _goldfish_gather_sender_receiver_model(SEXP dep_event_matSEXP, SEXP is_dependentSEXP, SEXP stat_mat_initSEXP, SEXP stat_mat_updateSEXP, SEXP stat_mat_update_pointerSEXP, SEXP stat_mat_rightcensored_updateSEXP, SEXP stat_mat_rightcensored_update_pointerSEXP, SEXP presence1_initSEXP, SEXP presence1_updateSEXP, SEXP presence1_update_pointerSEXP, SEXP presence2_initSEXP, SEXP presence2_updateSEXP, SEXP presence2_update_pointerSEXP, SEXP n_actors_1SEXP, SEXP n_actors_2SEXP, SEXP twomode_or_reflexiveSEXP, SEXP verboseSEXP, SEXP imputeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type dep_event_mat(dep_event_matSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type is_dependent(is_dependentSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type stat_mat_init(stat_mat_initSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type stat_mat_update(stat_mat_updateSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type stat_mat_update_pointer(stat_mat_update_pointerSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type stat_mat_rightcensored_update(stat_mat_rightcensored_updateSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type stat_mat_rightcensored_update_pointer(stat_mat_rightcensored_update_pointerSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type presence1_init(presence1_initSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type presence1_update(presence1_updateSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type presence1_update_pointer(presence1_update_pointerSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type presence2_init(presence2_initSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type presence2_update(presence2_updateSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type presence2_update_pointer(presence2_update_pointerSEXP);
    Rcpp::traits::input_parameter< const int >::type n_actors_1(n_actors_1SEXP);
    Rcpp::traits::input_parameter< const int >::type n_actors_2(n_actors_2SEXP);
    Rcpp::traits::input_parameter< const bool >::type twomode_or_reflexive(twomode_or_reflexiveSEXP);
    Rcpp::traits::input_parameter< const bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< const bool >::type impute(imputeSEXP);
    rcpp_result_gen = Rcpp::wrap(gather_sender_receiver_model(dep_event_mat, is_dependent, stat_mat_init, stat_mat_update, stat_mat_update_pointer, stat_mat_rightcensored_update, stat_mat_rightcensored_update_pointer, presence1_init, presence1_update, presence1_update_pointer, presence2_init, presence2_update, presence2_update_pointer, n_actors_1, n_actors_2, twomode_or_reflexive, verbose, impute));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_goldfish_estimate_DyNAM_MM", (DL_FUNC) &_goldfish_estimate_DyNAM_MM, 15},
    {"_goldfish_estimate_DyNAM_choice", (DL_FUNC) &_goldfish_estimate_DyNAM_choice, 12},
    {"_goldfish_estimate_DyNAM_rate", (DL_FUNC) &_goldfish_estimate_DyNAM_rate, 19},
    {"_goldfish_estimate_DyNAM_rate_ordered", (DL_FUNC) &_goldfish_estimate_DyNAM_rate_ordered, 15},
    {"_goldfish_estimate_REM", (DL_FUNC) &_goldfish_estimate_REM, 19},
    {"_goldfish_estimate_REM_ordered", (DL_FUNC) &_goldfish_estimate_REM_ordered, 15},
    {"_goldfish_compute_coordination_selection", (DL_FUNC) &_goldfish_compute_coordination_selection, 9},
    {"_goldfish_compute_multinomial_selection", (DL_FUNC) &_goldfish_compute_multinomial_selection, 4},
    {"_goldfish_compute_poisson_selection", (DL_FUNC) &_goldfish_compute_poisson_selection, 6},
    {"_goldfish_C_convert_composition_change", (DL_FUNC) &_goldfish_C_convert_composition_change, 2},
    {"_goldfish_convert_composition_change", (DL_FUNC) &_goldfish_convert_composition_change, 2},
    {"_goldfish_convert_change", (DL_FUNC) &_goldfish_convert_change, 1},
    {"_goldfish_gather_receiver_model", (DL_FUNC) &_goldfish_gather_receiver_model, 12},
    {"_goldfish_gather_sender_model", (DL_FUNC) &_goldfish_gather_sender_model, 18},
    {"_goldfish_gather_sender_receiver_model", (DL_FUNC) &_goldfish_gather_sender_receiver_model, 18},
    {NULL, NULL, 0}
};

RcppExport void R_init_goldfish(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
