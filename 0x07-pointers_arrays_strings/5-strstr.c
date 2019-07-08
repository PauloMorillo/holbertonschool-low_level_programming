#include "holberton.h"
#include <stdio.h>
/**
 * _strstr - search a string for any of a set of bytes
 * @haystack: input string
 * @needle: input character to locates in string
 *
 * Return: matrix filled.
 */

char *_strstr(char *haystack, char *needle)
{
	int a = 0;
	int b = 0;
	int c = 0;

	while (haystack[a] != '\0' && c == 0)
	{
		while (needle[b] != '\0')
		{
			if (haystack[a] == needle[b])
			{

			}
			else
			{
				break;
			}
			b = b + 1;
		}
		b = 0;
		a = a + 1;
	}
	s = s + (a - 1);
	return (s);
}
