#include <Rcpp.h>
using namespace Rcpp;
// [[Rcpp::export]]
NumericMatrix rbind_rcpp(NumericMatrix A,NumericVector B){

  if(B.size() == A.ncol()){
    NumericMatrix newMatrix(A.nrow()+1,A.ncol());
    NumericVector aux;
    for(int i = 0; i < B.size(); i++){
      aux = A.column(i);
      aux.push_back(B(i));
      newMatrix.column(i) = aux;
    }
    return newMatrix;
  }else{
    Rcout<<"la longitud del vector 'B' es diferente que el número de filas de A";
  }

  return 1;
}
