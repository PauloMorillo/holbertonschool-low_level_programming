#include "holberton.h"

/**
 * print_chessboard - search a string for any of a set of bytes
 * @a: input matrix
 *
 *
 * Return: matrix filled.
 */

void print_chessboard(char (*a)[8])
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
