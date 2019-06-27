#include "holberton.h"

/**
 * print_diagonal - function to print diagonal
 *
 * @n: input number to print diagonal
 *
 */

void print_diagonal(int n)
{
	int a = 0;
	int b = 0;

	while (b < n)
	{
		while (a < b)
		{
			_putchar(' ');
			a = a + 1;
		}
		a = 0;
		_putchar(92);
		_putchar('\n');
		b = b + 1;
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
