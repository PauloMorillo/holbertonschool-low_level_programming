#include "holberton.h"
/**
 * print_last_digit - return alas digit or a int.
 *
 * @n: the caracter that receive and return
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_last_digit(int n)
{
	n = n % 10;
	if (n < 0)
	{
		n = n * -1;
	}
	_putchar('0' + n);
	return (n);
}
