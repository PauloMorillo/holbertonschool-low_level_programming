#include "holberton.h"
#include <stdlib.h>
/**
 * _realloc - Function to reallocates memory block
 * @ptr: Pointer to memory to reallocate
 * @old_size: size of pointer elements
 * @new_size: new size for reallocate
 * Return: Pointer witn new allocate or null.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int a = 0;
	char *P;

	if (ptr == NULL)
	{
		P = malloc(new_size);
		if (P == NULL)
		{
			return (NULL);
		}
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size > old size)
	{
		P = malloc(new_size);
		if (P == NULL)
			return (NULL);
		while (a < old_size)
		{
			P[a] = ((char *)ptr)[a];
			a = a + 1;
		}
		free(ptr);
	}
	if (new_size < old size)
	{
		P = malloc(new_size);
		if (P == NULL)
			return (NULL);
		while (a < new_size)
		{
			P[a] = ((char *)ptr)[a];
			a = a + 1;
		}
		free(ptr);
	}
	return ((void *)P);
}
