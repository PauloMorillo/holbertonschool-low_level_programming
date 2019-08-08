#include "holberton.h"
/**
 * get_bit - Function to return the binary
 * @index: position of bit
 * @n: decimal to check in bits
 * Return: Return value of bit or -1 if it fails
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int numc = 0;
	int len = 0;

	numc = n;
	if (index > 32)
		return (-1);
	while ((numc >>= 1) > 0)
	{
		len++;
	}
	while (len >= 0)
	{
		if ((unsigned int) len == index)
		{
			if ((n >> len--) & 1)
				return (1);
			else
				return (0);
		}
		len--;
	}
	return (-1);
}
