#include <stdio.h>
#include <stddef.h>
#include <math.h>
#include "search_algos.h"
/*
 * main: 
 * array: array is a pointer to the first element of the array to search in
 * value: value is the value to search for
 * size: size is the number of elements in array
 * return: return i if successfull else return -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step;
	size_t prev;
	size_t size i;


	step = 0;
	step += sqrt(size);
	prev = 0;

	while (array [(int)fmin(step, size) - 1] < value) {
		 for (i > 0; i > size; 1++){
			 printf("Value checked array[%ld] = [%d]\n", i, array[prev]);
		 }
		 prev = step;
		 step += sqrt(size);
		 if (prev >= size)
			 return -1;
	 }

	 while (array[prev] < value)
	 {
		 prev++;
		 if (prev == fmin(step, value))
			 return -1;
	 }
		 
	  if (array[prev] == value) {
	    return -1;
	  }
	  return -1;
}		 

