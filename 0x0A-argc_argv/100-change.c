#include <stdlib.h>
#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 * @argc: input the number or arguments in commandline
 * @argv: input the array of arguments in commandline
 * Return: numbers of coins for change or null.
 */

int main(int argc, char *argv[])
{
	int coin = 0, count, numb;

	if (argc == 1)
	{
		printf("Error\n");
		return (0);
	}
	if (argc > 1 && argc < 3)
	{
		numb = atoi(argv[1]);

		while (numb > 0)
		{
			if (numb >= 25)
			{
				coin = coin + 1;
				numb = numb - 25;
				count = 1;
			}
			else if (numb >= 10 && count == 0)
			{
				coin = coin + 1;
				numb = numb - 10;
				count = 1;
			}
			else if (numb >= 5 && count == 0)
			{
				coin = coin + 1;
				numb = numb - 5;
				count = 1;
			}
			else if (numb >= 2 && count == 0)
			{
				coin = coin + 1;
				numb = numb - 2;
				count = 1;
			}
			else if (numb >= 1 && count == 0)
			{
				coin = coin + 1;
				numb = numb - 1;
				count = 1;
			}
			count = 0;
		}
		printf("%d\n", coin);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
