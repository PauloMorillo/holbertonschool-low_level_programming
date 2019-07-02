#include "holberton.h"
#include <stdio.h>
/**
 * print_array - print all posix
 * @a: input strings
 * @n: input length of array
 *
 */

void print_array(int *a, int n)
{
	/*int c = 0;*/
	int b = 0;

	while (b < n)
	{
		if (b == n - 1)
		{
			printf("%d\n", a[b]);
		}
		else
		{
			printf("%d, ", a[b]);
		}
		b = b + 1;
	}
}
