#include "holberton.h"

/**
 * print_alphabet_x10 - writes the alphabet between a to z in 5 lines.
 *
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_alphabet_x10(void)
{
	int a2 = 0;

	while (a2 < 10)
	{
		char a = 'a';

		while (a <= 'z')
		{
			_putchar(a);
			a = a + 1;
		}
		_putchar('\n');
		a2 = a2 + 1;
	}
}
