#include "holberton.h"

/**
 * rot13 - encodes a string to ROT13
 * @s1: first input word to string to encode
 *
 *
 * Return: answer of encode
 */

char *rot13(char *s1)
{
	int a = 0;
	int b = 0;
	char c[53] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char d[53] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	/*n = n / 8;*/
	while (s1[a] != '\0')
	{
		while (b < 53)
		{
			if (s1[a] == c[b])
			{
				s1[a] = d[b];
				break;
			}
			b = b + 1;
		}
		b = 0;
		a = a + 1;
	}
	return (s1);
}
