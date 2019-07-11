#include "holberton.h"
/**
 * check_divisor - find square root
 * @a: main number
 * @b: multiples to calculate
 * Return: root square or -1
 */
int check_divisor(int a, int b)
{
	if (b * b == a)
		return (b);
	if (b * b > a)
		return (-1);
	return (check_divisor(a, b + 1));
}
/**
 * _sqrt_recursion - function to calculate root square
 * @n: number to calculate root square
 * Return: root square
 */
int _sqrt_recursion(int n)
{
	if (n > 1 && n < 4)
		return (-1);
	return (check_divisor(n, 1));
}
