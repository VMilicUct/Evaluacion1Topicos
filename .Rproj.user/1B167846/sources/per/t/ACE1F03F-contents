#include <Rcpp.h>
using namespace Rcpp;
// [[Rcpp::export]]
NumericMatrix cbind_rcpp(NumericMatrix A,NumericVector B){

  if(B.size() == A.nrow()){
    NumericMatrix newMatrix(A.nrow(),A.ncol()+1);
    NumericVector aux;
    for(int i = 0; i < B.size(); i++){
      aux = A.row(i);
      aux.push_back(B(i));
      newMatrix.row(i) = aux;
    }
    return newMatrix;
  }else{
      Rcout<<"la longitud del vector 'B' es diferente que el número de filas de A";
  }

  return 1;
}


