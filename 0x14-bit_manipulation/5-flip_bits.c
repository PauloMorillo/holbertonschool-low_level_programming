#include "holberton.h"
/**
 * flip_bits - Function to print dec to binary
 * @n: dec to compare
 * @m: second dec to return difference with n
 * Return: Return difference
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int numc = 0, numc2 = 0;
	unsigned int flips = 0, dif = 0, dif2 = 0;
	int len = 0, len2 = 0, count = 0;

	numc = n;
	numc2 = m;
	while ((numc >>= 1) > 0)
		len = len + 1;
	while ((numc2 >>= 1) > 0)
		len2++;
	while ((count <= len) || (count <= len2))
	{
		if ((n >> count) & 1 && count <= len)
			dif = 1;
		if ((m >> count) & 1 && count <= len2)
			dif2 = 1;
		if ((dif == 1 && dif2 == 0) || (dif == 0 && dif2 == 1))
			flips = flips + 1;
		count++;
		dif = 0;
		dif2 = 0;
	}
	return (flips);
}
