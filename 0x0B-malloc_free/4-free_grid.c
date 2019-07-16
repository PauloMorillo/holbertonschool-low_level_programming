#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - Functions for concatenate two strings
 * @grid: input position of the first element
 * @height: input size of height
 *
 * Return: do not return.
 */

void free_grid(int **grid, int height)
{
	int a = 0;

	while (a < height)
	{
		free(grid[a]);
		a = a + 1;
	}
	free(grid);
}
