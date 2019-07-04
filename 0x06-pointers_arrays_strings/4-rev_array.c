#include "holberton.h"

/**
 * reverse_array - reverse the array
 * @a: first input array
 * @n: second input length of first input
 *
 * Return: this function doesn't use return
 */

void reverse_array(int *a, int n)
{
	int a2 = 0;
	/*int a3 = 0;*/
	int izq;
	int der;

	n = n - 1;
	while (n > a2)
	{
		izq = a[a2];
		der = a[n];
		a[a2] = der;
		a[n] = izq;
		n = n - 1;
		a2 = a2 + 1;

	}
}
