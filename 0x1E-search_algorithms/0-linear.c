#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * linear_search - search value in an array with linear search method
 * @array: array with values to search
 * @size: size of arrray
 * @value: value to find
 * Return: Always EXIT_SUCCESS
 */

int linear_search(int *array, size_t size, int value)
{

	int a = 0;

	if (array == NULL || size <= 0)
		return (-1);
	while (a < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", a, array[a]);
		if (array[a] == value)
			return (a);
		a = a + 1;
	}
	return (-1);
}
