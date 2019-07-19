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
	char *p;
	unsigned int i;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (old_size == new_size)
		return (ptr);
	p = malloc(new_size);
	if (p == NULL)
		free(p);
		return (NULL);
	for (i = 0; i < old_size && i < new_size; i++)
		p[i] = ((char *)ptr)[i];
	free(ptr);
	return (p);
}
