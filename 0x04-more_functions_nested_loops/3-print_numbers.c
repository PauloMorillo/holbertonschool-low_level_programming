#include "holberton.h"

/**
 * print_numbers - function to print numbers between 0 to 9
 *
 *
 *
 */

void print_numbers(void)
{
	int a = '0';

	while (a <= '9')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
