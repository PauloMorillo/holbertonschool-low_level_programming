#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n = '0';
	char n2 = 'a';

	while (n <= '9')
	{
		putchar(n);
		n = n + 1;
	}
	while (n2 <= 'f')
	{
		putchar(n2);
		n2 = n2 + 1;
	}
	putchar('\n');
	return (0);
}
