#include "holberton.h"

/**
 * print_most_numbers - function to print ints between 0 to 9 whitout 2 and 4
 *
 *
 *
 */

void print_most_numbers(void)
{
	int a = '0';

	while (a <= '9')
	{
		if (a == '2' || a == '4')
		{
			a = a + 1;
		}
		_putchar(a);
		a = a + 1;
	}
	_putchar('\n');
}
