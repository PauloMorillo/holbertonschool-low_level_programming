#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int n2;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	n2 = n % 10;

	if (n2 > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, n2);
	}
	if (n2 == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, n2);
	}
	if (n2 < 5 && n2 != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n2);
	}
	return (0);
}