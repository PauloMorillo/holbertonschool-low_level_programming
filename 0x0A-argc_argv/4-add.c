#include <stdlib.h>
#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 * @argc: input the number or arguments in commandline
 * @argv: input the array of arguments in commandline
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i, j;
	int suma;
	int numb;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			numb = atoi(argv[i]);
			suma = suma + numb;
			for (j = 0; argv[i][j] != '\0' ; j++)
			{
				/*printf("%c valor entrante ", argv[i][j];*/
				/*if (argv[i][j] < '0' && argv[i][j] > '9')*/
				if (isdigit(argv[i][j]) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
			/*printf("%s argumento ", argv[i]);*/
		}
		printf("%d\n", suma);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
