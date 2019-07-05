#include "holberton.h"

/**
 * leet - encodes a string into 1337
 * @s1: first input word to string to encode
 *
 *
 * Return: answer of encode
 */

char *leet(char *s1)
{
	int a = 0;
	int b = 0;
	char c[11] = "aeotlAEOTL";
	int e[11] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};

	/*n = n / 8;*/
	while (s1[a] != '\0')
	{
		while (b < 5)
		{
			if (s1[a] == c[b])
			{
				s1[a] = e[b];
			}
			b = b + 1;
		}
		b = 0;
		a = a + 1;
	}
	return (s1);
}
