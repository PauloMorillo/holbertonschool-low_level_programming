#include "holberton.h"

/**
 * print_rev - print the string in reverse
 * @s: input pointer with string
 *
 *
 */

void print_rev(char *s)
{
	int a1 = 0;

	while (s[a1] != '\0')
	{
		/*_putchar(s[a1]);*/
		a1 = a1 + 1;
	}
	while (a1 > '\0')
	{
		a1 = a1 - 1;
		_putchar(s[a1]);
	}
	_putchar('\n');
}
