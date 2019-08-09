#include "holberton.h"
/**
 * set_bit - Function to set the binary
 * @index: position of bit
 * @n: decimal to check in bits
 * Return: Return value with new bit or -1 if it fails
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index <= 64)
		return ((*n) |= 1 << index);
	return (-1);
}
