#include "sort.h"
/**
 * bubble_sort - algorithm to sort array starts camparing two first elements
 * @array: array with integers to sort
 * @size: array size
 * Return: Do not return anything
 */
void bubble_sort(int *array, size_t size)
{
	size_t a = 1, b = 1;
	int temp = 0;

	if (size && size > 2 && array != NULL)
	{
		while (a < size)
		{
			if (array[a - 1] > array[a])
			{
				temp = array[a];
				array[a] = array[a - 1];
				array[a - 1] = temp;
				print_array(array, size);
			}
			else
			{
				b = b + 1;
			}
			a = a + 1;
			if (b == size && a == size)
			{
				break;
			}
			else if (a  == size)
			{
				a = 1;
				b = 1;
			}
		}
	}
}
