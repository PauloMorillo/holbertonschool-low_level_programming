#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	signed int n = '0';

	while (n <= '9')
	{
		putchar(n);
		if (n <= '8')
		{
			putchar(',');
			putchar(' ');
		}
		n = n + 1;
	}
	putchar('\n');
	return (0);
}
