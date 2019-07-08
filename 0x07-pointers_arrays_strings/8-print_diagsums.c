#include "holberton.h"

/**
 * print_diagsums - print sum of diagonals of a matrix
 * @a: input matrix
 *
 *
 * Return: matrix filled.
 */

void print_diagsums(int *a, int size)
{
	int b = 0;
	int c = 0;

	while (b < 8)
	{
		while (c < 8)
		{
			_putchar(a[b][c]);
			c = c + 1;
		}
		_putchar('\n');
		c = 0;
		b = b + 1;
	}
}
