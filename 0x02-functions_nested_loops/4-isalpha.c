#include "holberton.h"
/**
 * _isalpha - returns 1 if is alpha else returns 0.
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _isalpha(int c)
{
	if (c < 123  && c > 60)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	if (c < 91 && c > 64)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
