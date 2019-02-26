#include "recfuncs.h"
#include <math.h>

int calc_array_size(int n){
  if(n == 0) { return 1; }
  return 2*calc_array_size(n-1);
}

int convert_to_binary(int n){
  if(n == 1) { return 1; }
  if(n == 0) { return 0; }
  return (n%2)*10+convert_to_binary((int)floor(n/2));
}

int* create_array(int size){
  int* array=new int[size];

  for (int i = 0; i < size; i++){
    array[i]=-1;
  }

  return array;
}

int calc_factorial(int n){
  if(n==0)
  {
    return 1;
  }
  return n*calc_factorial(n-1);
}

int calc_sums(int* n, int count, int* out_arr, int* out_arr_bin){
 return 0;
}

struct CalculationResults perform_calculations(int* arr, int n){
  struct CalculationResults res;
  return res;
}
