#include "holberton.h"

/**
 * print_line - function to print lines
 *
 * @n: input number to print lines
 *
 */

void print_line(int n)
{
	int a = 0;

	while (a < n)
	{
		_putchar('_');
		a = a + 1;
	}
		_putchar('\n');
}
