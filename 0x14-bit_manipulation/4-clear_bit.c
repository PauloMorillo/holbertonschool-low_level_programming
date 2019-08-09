#include "holberton.h"
/**
 * clear_bit - Function to clear the binary
 * @index: position of bit
 * @n: decimal to check in bits
 * Return: Return value with new bit or -1 if it fails
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index <= 64)
	{
		(*n) &= ~(1 << index);
		return (1);
	}
	return (-1);
}
