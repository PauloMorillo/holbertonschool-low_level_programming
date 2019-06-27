#include "holberton.h"

/**
 * print_square - function to print square
 *
 * @size: input number to print square
 *
 */

void print_square(int size)
{
	int a = 0;
	int b = 0;

	while (b < size)
	{
		while (a < size)
		{
			_putchar(35);
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
