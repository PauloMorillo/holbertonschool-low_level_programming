#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * prints - Function to print all the arguments with separator.
 * @valist: pointer to separator to print
 * Return: do not return
 */
void prints(va_list valist)
{
	char *car = va_arg(valist, char *);

	if (car == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", car);
}
/**
 * printch - Function to print all the arguments with separator.
 * @valist: pointer to separator to print
 * Return: do not return
 */
void printch(va_list valist)
{
	printf("%c", (char)va_arg(valist, int));
}
/**
 * printi - Function to print all the arguments with separator.
 * @valist: pointer to separator to print
 * Return: do not return
 */
void printi(va_list valist)
{
	printf("%d", va_arg(valist, int));
}

/**
 * printflo - Function to print arguments float
 * @valist: pointer to separator to print
 * Return: do not return
 */
void printflo(va_list valist)
{
	printf("%f", (float)va_arg(valist, double));
}



/**
 * print_all - Function to print all the arguments with separator.
 * @format: pointer with format to use
 * Return: the sum of all or 0.
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	int b = 0;
	int d = 0;
	int c = 0;

	formatico ops[] = {
		{"c", printch},
		{"s", prints},
		{"i", printi},
		{"f", printflo}
	};

	va_start(valist, format);
	while (format[b] != 0)
	{
		while (d < 4)
		{
			if (format[b] == *(ops[d].forma))
			{
				switch (c)
				{
				case 0:
					break;
				default:
					printf(", ");
				}
				c = 1;
				ops[d].f(valist);
				d = 4;
			}
			d = d + 1;
		}
		d = 0;
		b = b + 1;
	}
	printf("\n");
	va_end(valist);
}
