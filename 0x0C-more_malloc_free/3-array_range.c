#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - Function to create an array of integers
 * @min: first input array of elements
 * @max: Maximun value to the array
 * Return: a pointer or null.
 */
int *array_range(int min, int max)
{
	int *P, a = 0;

	if (min > max)
	{
		return (NULL);
	}

	P = malloc((max + 1 - min) * 4);
	if (P == NULL)
	{
		free(P);
		return (NULL);
	}
	while (a < (max - min + 1))
	{
		P[a] = min + a;
		a = a + 1;
	}
	return (P);
}
