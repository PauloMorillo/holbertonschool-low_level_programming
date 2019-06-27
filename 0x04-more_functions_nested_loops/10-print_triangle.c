#include "holberton.h"

/**
 * print_triangle - function to print triangle
 *
 * @size: input number to print square
 *
 */

void print_triangle(int size)
{
	int a = 0;
	int b = 0;

	while (b < size)
	{
		while (a < size)
		{
			if (a < (size - 1 - b))
			{
				_putchar(' ');
			} else
			{
				_putchar(35);
			}
			a = a + 1;
		}
		a = 0;
		/*_putchar(92);*/
		_putchar('\n');
		b = b + 1;
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
