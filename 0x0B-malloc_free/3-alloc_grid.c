#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - Functions for concatenate two strings
 * @width: input size of width
 * @height: input size of height
 *
 * Return: Pointer of chars.
 */

int **alloc_grid(int width, int height)
{
	int **P;
	int a = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	P = (int **)malloc(height * sizeof(int *));
	if (P == NULL)
	{
		return (NULL);
	}
	while (a < height)
	{
		P[a] = (int *)malloc(width * sizeof(int));
		if (P[a] == NULL)
		{
			while (a >= 0)
			{
				free(P[a]);
				a = a - 1;
			}
			return (NULL);
		}
		a = a + 1;
	}
	return (P);
}
