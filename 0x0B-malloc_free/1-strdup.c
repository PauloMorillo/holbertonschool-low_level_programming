#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - Create an array with str
 * @str: input strings to save in another memory space
 *
 *
 * Return: Pointer of chars.
 */

char *_strdup(char *str)
{
	char *P;
	int a = 0;
	int b = 0;

	while (str[a] != '\0')
	{
		a = a + 1;
	}
	if (a == 0)
	{
		return (NULL);
	}
	P = malloc(a);
	while (b < a)
	{
		P[b] = str[b];
		b = b + 1;
	}
	return (P);
}
