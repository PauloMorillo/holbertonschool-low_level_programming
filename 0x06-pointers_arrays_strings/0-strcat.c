#include "holberton.h"

/**
 * _strcat - concatenate two strings
 * @dest: first input word
 * @src: second input word
 * Return: concatenated answer in first string
 */

char *_strcat(char *dest, char *src)
{
	int a = 0;
	int a2 = 0;

	while (dest[a] != '\0')
	{
		a = a + 1;
	}
	while (src[a2] != '\0')
	{
		dest[a + a2] = src[a2];
		a2 = a2 + 1;
	}
	return (dest);
}
