#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n = 'a';

	while (n <= 'z')
	{
		if (n == 'q' || n == 'e')
		{
			n = n + 1;
		}
		putchar(n);
		n = n + 1;
	}
	putchar('\n');
	return (0);
}
