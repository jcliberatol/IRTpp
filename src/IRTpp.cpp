#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export]]
List IRTpp(SEXP data,SEXP model,SEXP dim,SEXP initVal,SEXP epsilonConv,
  SEXP maxIter,SEXP verbose) {
  
  Rcpp::IntegerMatrix xdata(data);
  Rcpp::CharacterVector xmodel(model);
  Rcpp::IntegerVector xdim(dim);
  Rcpp::CharacterVector xinitVal(initVal);
  Rcpp::NumericVector xepsilonConv(epsilonConv);
  Rcpp::IntegerVector xmaxIter(maxIter);
  Rcpp::LogicalVector xverbose(verbose);
  
  List z = List::create(xdata, xmodel, xdim, xinitVal,xepsilonConv, xmaxIter, xverbose) ;
  return z;
}
 
