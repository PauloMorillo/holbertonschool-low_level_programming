#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers - Function to print all the arguments with separator.
 * @separator: pointer to separator to print
 * @n: length of arguments
 * Return: the sum of all or 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	int va = 0;
	unsigned int i = 0;
	int a = 0;

	va_start(valist, n);
	while (i < n)
	{
		va = va_arg(valist, int);
		printf("%d", va);
		if (separator)
		{
			while (separator[a] != '\0' && i < n - 1)
			{
				printf("%c", separator[a]);
				a = a + 1;
			}
			a = 0;
		}
		i = i + 1;
	}
		printf("\n");
		va_end(valist);
}
