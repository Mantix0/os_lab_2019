#include "sum.h"

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void GenerateArray(int *array, unsigned int array_size, unsigned int seed) {
  srand(seed);
  for (int i = 0; i < array_size; i++) {
    array[i] = rand();
  }
}

long int Sum(const struct SumArgs *args) {
  long long int sum = 0;
  for(int i = args->begin; i < args->end; i++)
    sum += args->array[i];
  return sum;
}

void *ThreadSum(void *args) 
{
  struct SumArgs *sum_args = (struct SumArgs *)args;
  return (void *)(size_t)Sum(sum_args);
}