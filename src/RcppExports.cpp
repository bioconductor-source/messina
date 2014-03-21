// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// messinaC
List messinaC(NumericMatrix x, LogicalVector cls, uint32_t n_boot, uint32_t n_train, float minsens, float minspec, bool progress, bool silent);
RcppExport SEXP messina_messinaC(SEXP xSEXP, SEXP clsSEXP, SEXP n_bootSEXP, SEXP n_trainSEXP, SEXP minsensSEXP, SEXP minspecSEXP, SEXP progressSEXP, SEXP silentSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP );
        Rcpp::traits::input_parameter< LogicalVector >::type cls(clsSEXP );
        Rcpp::traits::input_parameter< uint32_t >::type n_boot(n_bootSEXP );
        Rcpp::traits::input_parameter< uint32_t >::type n_train(n_trainSEXP );
        Rcpp::traits::input_parameter< float >::type minsens(minsensSEXP );
        Rcpp::traits::input_parameter< float >::type minspec(minspecSEXP );
        Rcpp::traits::input_parameter< bool >::type progress(progressSEXP );
        Rcpp::traits::input_parameter< bool >::type silent(silentSEXP );
        List __result = messinaC(x, cls, n_boot, n_train, minsens, minspec, progress, silent);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
