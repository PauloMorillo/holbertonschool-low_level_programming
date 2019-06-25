#include "holberton.h"

/**
 * print_alphabet - writes the alphabet between a to z in lowercase.
 *
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a = a + 1;
	}
	_putchar('\n');
}
