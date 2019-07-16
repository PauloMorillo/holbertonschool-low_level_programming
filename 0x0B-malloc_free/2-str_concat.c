#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - Functions for concatenate two strings
 * @s1: input size of array to create
 * @s2: Character to put in array
 *
 * Return: Pointer of chars.
 */

char *str_concat(char *s1, char *s2)
{
	char *P;
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	while (s1[a] != '\0')
	{
		a = a + 1;
	}
	while (s2[b] != '\0')
	{
		b = b + 1;
	}
	if (a == 0 || b == 0)
	{
	P = malloc(a + b + 1);
	}
	else
	{
		P = malloc(a + b);
	}
	if (P == NULL)
	{
		free(P);
		return (NULL);
	}
	while (c <= (a + b))
	{
		if (c < a)
		{
			P[c] = s1[c];
		}
		else if (c >= a && c < a + b)
		{
			P[c] = s2[d];
			d = d + 1;
		}
		if (c == (a + b))
		{
			P[c] = '\0';
		}
		c = c + 1;
	}
	return (P);
}
