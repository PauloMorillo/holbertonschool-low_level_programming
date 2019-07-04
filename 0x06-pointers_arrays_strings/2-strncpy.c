#include "holberton.h"

/**
 * _strncpy - copy a string between another
 * @dest: first input word
 * @src: second input word
 * @n: input length to concatenated from src
 * Return: answer eith copied
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;
	int a2 = 0;
	int a3 = 0;

	/*n = n / 8;*/
	while (dest[a] != '\0')
	{
		a = a + 1;
	}
	while (src[a2] != '\0')
	{
		a2 = a2 + 1;
	}
	while (a3 < n)
	{
		if (a3 <= a2)
		{
			dest[a3] = src[a3];
		}
		else
		{
			dest[a3] = 0;
		}
		a3 = a3 + 1;
	}
	return (dest);
}
