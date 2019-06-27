#include "holberton.h"

/**
 * more_numbers - function to print numbers between 0 to 14 ten times
 *
 *
 *
 */

void more_numbers(void)
{
	int a = 0;
	int b;
	int impr;
	int c = 0;

	while (c < 10)
	{

		while (a <= 14)
		{
			impr = a;
			if (a > 9)
			{
				b = a % 10;
				impr = 1;
			}
			_putchar(impr + '0');
			if (a > 9)
			{
				_putchar(b + '0');
			}
			a = a + 1;
		}
		a = 0;
		c = c + 1;
		_putchar('\n');
	}
}
