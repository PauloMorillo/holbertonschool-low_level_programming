#include "holberton.h"
/**
 * print_binary - Function to print dec to binary
 * @n: dec to print like binary
 * Return: do not return
 */
void print_binary(unsigned long int n)
{
	unsigned long int numc = 0;
	int len = 0;

	numc = n;
	while ((numc >>=1) > 0)
	{
		len++;
	}
	while(len >= 0)
	{
		if((n >> len--) & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
