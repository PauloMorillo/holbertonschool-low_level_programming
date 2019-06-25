#include "holberton.h"
/**
 * _abs - return absolut value.
 * @n: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	if (n == 0)
	{
		return (0);
	}
	if (n < 0)
	{
		return (n * -1);
	}
	return (0);
}
