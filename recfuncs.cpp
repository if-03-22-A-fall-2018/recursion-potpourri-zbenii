#include "recfuncs.h"
#include <math.h>
#include <stdlib.h>

int calc_array_size(int n){
  if(n == 0)
  {
    return 1;
  }

  return 2*calc_array_size(n-1);
}

int convert_to_binary(int n){
  if(n == 0)
  {
    return 0;
  }
  return (n%2)+10*convert_to_binary(n/2);
}

void help_create(int size, int i, int* start) {
  if(i < size) {
    int* new_address = start + i;
    new_address = (int*)malloc(sizeof(int));
    start[i] = -1;
    help_create(size, i+1, start);

    int* start_p = new_address;
    new_address = start_p;
  }
}

int* create_array(int size){
  if(size > 0)
  {
    int* array = (int*)malloc(sizeof(int));
    array[0] = -1;
    help_create(size, 1, array);
    return array;
  }

  return 0;
}

int calc_factorial(int n){
  if(n==0)
  {
    return 1;
  }
  return n*calc_factorial(n-1);
}

int thx(int* nums,int size, int* out_arr, int* out_arr_bin, int i, int index, int sum)
{
  if(i>size)
  {
    out_arr[index]=sum;
    out_arr_bin[index]=convert_to_binary(sum);
    return ++index;
  }

  int index1=thx(nums,size,out_arr,out_arr_bin,i+1,index,sum+nums[i]);
  return thx(nums,size,out_arr,out_arr_bin,i+1,index1,sum);
}

void calc_sums(int* nums,int size, int* out_arr, int* out_arr_bin){
  thx(nums, size-1, out_arr,out_arr_bin,0,0,0);
}

struct CalculationResults perform_calculations(int* arr, int n){
  struct CalculationResults res;
  return res;
}
