#include "holberton.h"

/**
 * _isdigit - function to know if a character is a digit
 * @c: - input int parameter
 * Return: - return 1 if the input value is a digit otherwise returns 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
