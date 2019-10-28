#include "sort.h"
/**
 * selection_sort - algorithm to sort array with minimun value
 * @array: array with integers to sort
 * @size: array size
 * Return: Do not return anything
 */
void selection_sort(int *array, size_t size)
{
	size_t a = 1, b = 0;
	int mini = 0, pos = 0, temp = 0;

	if (size && size >= 2 && array != NULL)
	{
		mini = array[0];
		while (a < size)
		{
			if (array[a] < mini)
			{
				mini = array[a];
				pos = a;
			}
			a = a + 1;
			if (b == size - 1 && a == size)
			{
				break;
			}
			else if (a  == size)
			{
				if (array[b] != mini)
				{
					temp = array[b];
					array[b] = mini;
					array[pos] = temp;
					print_array(array, size);
					mini = array[b + 1];
					b = b + 1;
					a = b + 1;
				}
				else
				{
					mini = array[b + 1];
					b = b + 1;
					a = b + 1;
				}
			}
		}
	}
}
