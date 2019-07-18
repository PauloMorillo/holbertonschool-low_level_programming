#include "holberton.h"
#include <stdlib.h>
/**
 * _realloc - Function to reallocates memory block
 * @ptr: Pointer to memory to reallocate
 * @old_size: size of pointer elements
 * @new_size: new size for reallocate
 * Return: do not return.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int a = 0;
	char *P;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		P = malloc(new_size);
		if (P == NULL)
			free(P);
			return (NULL);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
	{
		P = malloc(new_size);
		if (P == NULL)
		{
			free(P);
			return (NULL);
		}
		while (a < old_size && a < new_size)
		{
			P[a] = ((char *)ptr)[a];
			a = a + 1;
		}
		free(ptr);
	}
	return ((void *)P);
}
