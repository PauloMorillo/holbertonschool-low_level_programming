#include "holberton.h"
/**
 * get_endianness - Function to know how to storage integer
 * Return: Return value 1 little endian or 0 big endian
 */
int get_endianness(void)
{
	int a = 1;
	int *P;

	P = &a;
	if (P[0] == 1)
	{
		return (1);
	}
	return (0);
}
