#include "holberton.h"
#include <stdio.h>
/**
 * _pow_recursion - function calculate x raised to the power y
 * @x: input base
 * @y: input power
 * Return: FActorial
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	return (0);
}
