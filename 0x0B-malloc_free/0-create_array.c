#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - Create an array with variable
 * @size: input size of array to create
 * @c: Character to put in array
 *
 * Return: Pointer of chars.
 */

char *create_array(unsigned int size, char c)
{
	char *P;
	unsigned int a = 0;

	if (size == 0)
	{
		return (NULL);
	}
	P = malloc(size);
	if (P == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < size ; a++)
	{
		P[a] = c;
	}
	return (P);
}
