#include "holberton.h"
#include <stdlib.h>
/**
 * string_nconcat - Function to concatenates 2 strings.
 * @s1: first input string
 * @s2: seconde input string
 * @n: length of second string to concatenate
 * Return: a pointer or null.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *P;
	unsigned int a = 0, lens2 = n, b = 0, c = 0;

	if (s1 != NULL)
	{
		while (s1[a] != '\0')
			a = a + 1;
	}
	if (s2 != NULL)
		while (s2[b] != '\0')
			b++;
	if (n > b || n == b)
		lens2 = b;
	P = malloc(a + lens2 + 1);
	if (P == NULL)
	{
		free(P);
		return (NULL);
	}
	while (c <= (a + lens2 - 1))
	{
		if (c < a)
			P[c] = s1[c];
		if (c >= a)
			P[c] = s2[c - a];
		c = c + 1;
	}
	return (P);
}
