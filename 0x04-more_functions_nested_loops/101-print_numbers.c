#include "holberton.h"

/**
 * print_numbers - function to print numbers between 0 to 9
 *
 *
 *
 */

void print_number(int n)
{
	int a = '0';
	int b = 0;


	while (a < '1')
	{
		if (n < 0)
		{
			n= n*-1;
		}
		b=n%1000;
		n=n/10;
		_putchar(b+'0');
		/*_putchar('0');*/
		/*a++;*/
		if (n< 1 ){
			a = '1';
		}
	}
	_putchar('\n');
}
