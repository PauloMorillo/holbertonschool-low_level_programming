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
/*	for (i = 0; i < atoi(argv[1]); i++)*/
/*	printf("%02x ", p[i] & 0xFF); */
/*	printf("\n"); */
	return (0);
}
