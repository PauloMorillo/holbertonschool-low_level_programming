#include "holberton.h"

/**
 * _strncat - concatenate two strings to a byte position
 * @dest: first input word
 * @src: second input word
 * @n: input bytes to concatenated from src
 * Return: concatenated answer in first string
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int a2 = 0;

	n = n / 128;
	while (dest[a] != '\0')
	{
		a = a + 1;
	}
	while (a2 <= n)
	{
		dest[a + a2] = src[a2];
		a2 = a2 + 1;
	}
	return (dest);
}
