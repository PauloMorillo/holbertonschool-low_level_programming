#include "holberton.h"

/**
 * string_toupper - change lowcase to upper
 * @s1: first input word to string to upper
 *
 *
 * Return: answer to change to upper
 */

char *string_toupper(char *s1)
{
	int a = 0;

	/*n = n / 8;*/
	while (s1[a] != '\0')
	{
		if (s1[a] > 96 && s1[a] < 123)
		{
			s1[a] = s1[a] - 32;
		}
		a = a + 1;
	}
	return (s1);
}
