#include "holberton.h"
/**
 * get_bit - Function to return the binary
 * @index: position of bit
 * @n: decimal to check in bits
 * Return: Return value of bit or -1 if it fails
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 32)
		return (-1);
	if ((n >> index) & 1)
		return (1);
	else
		return (0);
}
