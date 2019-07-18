#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - Function to allocates memory for an array
 * @nmemb: first input array of elements
 * @size: size of elements
 * Return: a pointer or null.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *P;

	if (nmemb == 0 || size == 0)
		return (NULL);
	P = malloc(nmemb * size);
	if (P == NULL)
	{
		free(P);
		return (NULL);
	}
	return (P);
}
