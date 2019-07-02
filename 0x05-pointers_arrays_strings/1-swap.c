#include "holberton.h"

/**
 *
 * swap_int - change the value of two variable with pointers
 * @a: pointer a
 * @b: pointer b
 */

void swap_int(int *a, int *b)
{
	int a1 = *a;
	int b1 = *b;

	*a = b1;
	*b = a1;
}
