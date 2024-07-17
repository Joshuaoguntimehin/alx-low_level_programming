#include <stdio.h>
#include <stddef.h>
#include "search_algos.h"
/**
 * array- array is a pointer to the first element of the array to search in
 * size- size is the number of elements in array
 * value - value is the value to search for
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;
	if (array == NULL) 
		return -1;
	for (i = 0; i < size; i++) {
		printf("Value checked array[%lu] = %d\n", i, array[i]);
		if (array[i] == value){
			return i;
		}	
	}
	return -1;
}
