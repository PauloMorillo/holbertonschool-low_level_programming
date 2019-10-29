#include "sort.h"
/**
 * partitionf - Partition for the quicksort using the implement the Lomuto.
 * @array: array to sort.
 * @lo: Lowest index of the partition.
 * @hi: highest index of the partition.
 * @size: size of array
 * Return: position
 */
size_t partitionf(int *array, int lo, int hi, size_t size)
{
	int i, n;
	int  swap, p;

	p = array[hi];
	i = lo - 1;
	for (n = lo; n < hi; n++)
	{
		if (array[n] < p)
		{
			i++;
			if (i != n)
			{
				swap = array[i];
				array[i] = array[n];
				array[n] = swap;
				print_array(array, size);
			}
		}
	}
	if (array[hi] < array[i + 1])
	{
		swap = array[i + 1];
		array[i + 1] = array[hi];
		array[hi] = swap;
		print_array(array, size);
	}
	return (i + 1);
}
/**
 * quicksort - Sort a partition of an array integer.
 * @array: array to sort.
 * @lo: index of the partition.
 * @hi: highest indes of the partition function sort.
 * @size: size of the array.
 */
void quicksort(int *array, int lo, int hi, size_t size)
{
	int p;

	if (lo < hi)
	{
		p = partitionf(array, lo, hi, size);
		quicksort(array, lo, p - 1, size);
		quicksort(array, p + 1, hi, size);
	}
}
/**
 * quick_sort - sort an array of integers.
 * @array: Array to sort.
 * @size: Size of the array.
 *
 */
void quick_sort(int *array, size_t size)
{
	if (array != NULL && size >= 2)
	{
		quicksort(array, 0, size - 1, size);
	}
}
