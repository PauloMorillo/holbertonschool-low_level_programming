#include "holberton.h"
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: return 0 if all ok
 *
 */

int main(void)
{
	int a = 1;
	int pri3;
	int pri5;

	while (a <= 100)
	{
		pri3 = a % 3;
		pri5 = a % 5;
		if (pri3 != 0 && pri5 != 0)
		{
			printf("%d", a);
		} else if (pri3 == 0 && pri5 == 0)
		{
			printf("FizzBuzz");
		} else if (pri3 == 0)
		{
			printf("Fizz");
		} else if (pri5 == 0)
		{
			printf("Buzz");
		}
		if (a != 100)
		{
			printf(" ");
		}
			a = a + 1;
	}
	printf("\n");
}
