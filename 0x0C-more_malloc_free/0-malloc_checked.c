#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - Function to allocates memory with malloc
 * @b: integer with size of memory space
 *
 * Return: nothing
 */

void *malloc_checked(unsigned int b)
{
	int *P;

	P = malloc(b);
	if (P == NULL)
	{
		free(P);
		exit(98);
	}
	return (P);
}
