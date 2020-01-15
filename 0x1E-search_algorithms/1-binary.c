#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_search - search value in an array with binary search method
 * @array: array with values to search
 * @size: size of arrray
 * @value: value to find
 * Return: Always EXIT_SUCCESS
 */

int binary_search(int *array, size_t size, int value)
{

	int low = 0, a = 0;
	int high = (int)size - 1;
	int mid = 0;

	if (array == NULL || size <= 0)
		return (-1);
	while (low <= high)
	{
		mid = (((high + low) / 2));
		printf("Searching in array:");
		a = low;
		while (a <= high)
		{
			printf(" %d", array[a]);
			if (a < (high))
				printf(",");
			a = a + 1;
		}
		printf("\n");
		if (array[mid] == value)
			return (mid);

		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
