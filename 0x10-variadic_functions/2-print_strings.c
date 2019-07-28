#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_strings - Function to print all the arguments with separator.
 * @separator: pointer to separator to print
 * @n: length of arguments
 * Return: the sum of all or 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	char *va;
	unsigned int i = 0;
	int a = 0;
	int b = 0;

	va_start(valist, n);
	while (i < n)
	{
		va = va_arg(valist, char *);
		if (va == NULL)
		{
			printf("nil");
		}
		while (va[b] != 0)
		{
			printf("%c", va[b]);
			b = b + 1;
		}
		b = 0;
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
