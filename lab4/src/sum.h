#ifndef UTILS_H
#define UTILS_H

struct SumArgs {
  int *array;
  int begin;
  int end;
};

void GenerateArray(int *array, unsigned int array_size, unsigned int seed);

long int Sum(const struct SumArgs *args);

void *ThreadSum(void *args);

#endif