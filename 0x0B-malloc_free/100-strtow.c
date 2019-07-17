#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * strtow - Functions for concatenate all arguments of your program
 * @str: input size of arguments
 *
 *
 * Return: Pointer of chars.
 */

char **strtow(char *str)
{
	char **P;
	int i = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i = i + 1;
	}
	P = malloc(i + 1);
	return (P);
}
