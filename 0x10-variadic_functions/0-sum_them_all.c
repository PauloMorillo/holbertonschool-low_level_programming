#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Function to sum all the arguments.
 * @n: length of arguments
 * Return: the sum of all or 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	int suma = 0;
	unsigned int i = 0;

	if (n == 0)
		return (0);
	va_start(valist, n);
	while (i < n)
	{
		suma = suma + va_arg(valist, int);
		i = i + 1;
	}
	va_end(valist);
	return (suma);
}
