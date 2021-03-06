#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - Functions for concatenate all arguments of your program
 * @ac: input size of arguments
 * @av: array of arrays of arguments
 *
 * Return: Pointer of chars.
 */

char *argstostr(int ac, char **av)
{
	char *P;
	int i = 0;
	int j = 0;
	int size = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	while (i < ac)
	{
		while (av[i][j] != '\0')
		{
			j = j + 1;
		}
		size = size + j + 1;
		j = 0;
		i++;
	}
	P = malloc(size + 1);
	if (P == NULL)
	{
		free(P);
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, P++)
		{
			*P = av[i][j];
		}
		*P = '\n';
		P = P + 1;
	}
	P = P - size;
	return (P);
}
