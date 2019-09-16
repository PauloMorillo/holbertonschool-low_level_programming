#include <stdio.h>

/**
 * main -  funtion to search palindromes
 * Return: 0 if its ok
 */

int main(void)
{
	int a = 100;
	int b = 100;
	int c = 0;
	int mult = 0;
	int u = 1;
	int d = 0;
	int dm = 1;
	int M = 0;
	int m = 1;

	while (b < 999)
	{
		while (a < 999)
		{
		mult = a * b;

		u = (mult % 10);
		d = ((mult / 10) % 10);
		c = ((mult / 100) % 10);
		m = ((mult / 1000) % 10);
		dm = ((mult / 10000) % 10);
		M = ((mult / 100000) % 10);
		/* mult = (c * 100) + (d * 10) + u; */
		/* if (((M == u) && (dm == d) && (m == c))) */
		/* printf("%d%d%d%d%d%d\n", M, dm, m, c, d, u); */
		a = a + 1;
		}
		b = b + 1;
		a = 100;
	}
	return (0);
}
