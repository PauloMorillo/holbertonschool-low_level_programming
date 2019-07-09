#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - print sum of diagonals of a matrix
 * @a: input matrix
 * @size: input size of matrix
 *
 * Return: matrix filled.
 */

void print_diagsums(int *a, int size)
{
	int b = 0;
	int c = 0;
	int d1 = 0;
	int d2 = 0;

	while (b < (size * size))
	{
		d1 = d1 + a[b];
		/*d2 = d2 + a[c];*/
		b = b + 1 + size;
		c = c + (size - 1);
		d2 = d2 + a[c];
	}
	printf("%d, %d\n", d1, d2);
}
