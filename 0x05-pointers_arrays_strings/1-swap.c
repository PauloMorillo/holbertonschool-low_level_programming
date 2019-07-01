#include "holberton.h"

/**
 *
 * reset_to_98 - change the value of two variable with pointers
 * Description: this function return the swap between two pointers
 */

void swap_int(int *a, int *b)
{
	int a1 = *a;
	int b1 = *b;

	*a = b1;
	*b = a1;
}
