#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
#include <string.h>
/**
 * main - check the code for Holberton School students.
 * @argc: input number of arguments in main
 * @argv: input array of arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int a;
	int num1;
	int num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((strcmp(argv[2], "+") != 0) && (strcmp(argv[2], "-") != 0)
	    && (strcmp(argv[2], "*") != 0) && (strcmp(argv[2], "/") != 0)
	    && (strcmp(argv[2], "%") != 0))
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if (((strcmp(argv[2], "/") == 0) && num2 == 0) ||
	    ((strcmp(argv[2], "%") == 0) && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	a = (get_op_func(argv[2]))(num1, num2);
	printf("%d\n", a);
	return (0);
}
