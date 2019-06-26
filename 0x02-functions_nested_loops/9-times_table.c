#include "holberton.h"
/**
 * times_table - returns 1 if is alpha else returns 0.
 * Return: On success 1.
 */
void times_table(void)
{
	int a = 0;
	int b = 0;
	int co = 0;
	int valo = 0;
	int ult, dece;

	while (a <= 9)
	{
		while (b <= 9)
		{
			valo = a * b;
			if (valo < 10)
			{
				if (co > 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(valo + '0');
				co = co + 1;
			} else
			{
				ult = valo % 10;
				dece = ((valo - ult) / 10);
				_putchar(',');
				_putchar(' ');
				_putchar(dece + '0');
				_putchar(ult + '0');
			}
			b = b + 1;
		}
		_putchar('\n');
		b = 0;
		co = 0;
		a = a + 1;
	}
}
