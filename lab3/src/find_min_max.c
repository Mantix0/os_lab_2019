#include "find_min_max.h"

#include <limits.h>

struct MinMax GetMinMax(int *array, unsigned int begin, unsigned int end) {
  struct MinMax min_max;
  min_max.min = INT_MAX;
  min_max.max = INT_MIN;


  for (int *i = array + begin;i < array + end;i++){
    if (min_max.min > *i)
      min_max.min = *i;
    if (min_max.max < *i)
      min_max.max = *i;
    }

  // your code here
  return min_max;
}
