#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - searches for an interger
 * @array: array
 * @size: size of array
 * @cmp: pointer to function to print double
 * Return: Nothing.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a = 0;
	int b;
	int pos = 0;

	if (cmp != NULL && array != NULL && size > 0)
	{
		while (a < size)
		{
			b = (*cmp)(array[a]);
			if (b > 0)
			{
				pos = a;
				break;
			}
			a = a + 1;
		}
		if (pos)
		{
			return (pos);
		}
		else
		{
			return (-1);
		}
	}
	return (-1);
}
