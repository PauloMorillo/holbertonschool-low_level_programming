#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - call a pointer with print function and send value int
 * @array: array
 * @size: size of array
 * @action: pointer to function to print double
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a = 0;

	if (action)
	{
		while (a < size)
		{
			(*action)(array[a]);
			a = a + 1;
		}
	}
}
