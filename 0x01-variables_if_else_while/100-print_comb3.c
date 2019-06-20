#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	signed int n = '0';
	signed int b2 = '0';

	while (n <= '9')
	{
		while (b2 <= '9')
		{
			if (n < b2)
			{
				putchar(n);
				putchar(b2);
				if (n == '8' && b2 == '9')
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			b2=b2+1;
		}
		b2 = '0';
		n = n + 1;
	}
	putchar('\n');
	return (0);
}
