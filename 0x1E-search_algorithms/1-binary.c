#include <stdio.h>

/*
 * array - array is a pointer to the first element of the array to search in
 * size - size is the number of elements in array
 * value - value is the value to search for
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i;
	size_t left, right, middle;
	if (array == NULL)
	{
		return (-1);
	}
	left = 0;
	right = size -1;
	
	while (left <= right) {
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right) {
				printf(", ");
            	}
		}
		printf("\n");
		middle = left + (right - left) / 2;
		if (array[middle] == value) {
			return middle;
		}
		if (array[middle] < value) {
			left = middle + 1;
        	} else {
			right = middle - 1;
		}
	}
	return -1;
}
