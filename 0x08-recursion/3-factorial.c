#include "holberton.h"
#include <stdio.h>
/**
 * factorial - funtion to calculate the factorial of a number
 * @n: string to print
 * Return: FActorial
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	if (n > 0)
	{
		return (n * (factorial(n - 1)));
	}
	return (0);
}
