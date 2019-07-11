#include "holberton.h"
#include <stdio.h>
/**
 *  _sqrt_recursion - funtion to calculate the factorial of a number
 * @n: string to print
 * @a: input first digit
 * Return: square
 */
int look_multiples(int n, int a)
{
	if (n <= 0)
	{
		return (-1);
	}
	if (a * a > n)
	{
		return (-1);
	}
	if (a * a == n)
	{
		return(a);		
	}
	else
	{
		look_multiples(n, a + 1);
	}
}
int _sqrt_recursion(int n)
{
	int a = 1;
	
	return (look_multiples(n, a));
}
