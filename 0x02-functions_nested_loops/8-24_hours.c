#include "holberton.h"
/**
 * jack_bauer - count between 00:00 to 23:59
 *
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void jack_bauer(void)
{
	int a = '0';
	int b = '0';
	int c = '0';
	int d = '0';
	int pa = '9';

	while (a < '3')
	{
		while (b <= pa && a < '3')
		{
			if (a == '2')
			{
				pa = '3';
			}
			while (c < '6')
			{
				while (d <= '9')
				{

					_putchar(a);
					_putchar(b);
					_putchar(':');
					_putchar(c);
					_putchar(d);
					_putchar('\n');
					d = d + 1;
				}
				d = '0';
				c = c + 1;
			}
			c = '0';
			b = b + 1;
		}
		b = '0';
		a = a + 1;
	}
}
