#include <stdlib.h>
#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 * @argc: input number of arguments in main
 * @argv: input array of arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;
	char *p = (char *) &main;
	int a = 0;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	a = atoi(argv[1]);
	for (i = 0; i < a; i++)
	{
		printf("%02x\n", p[i] & 0xFF);
	}
	return (0);
}
