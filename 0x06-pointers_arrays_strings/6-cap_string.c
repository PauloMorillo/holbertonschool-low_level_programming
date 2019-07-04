#include "holberton.h"

/**
 * cap_string - change lowcase to upper
 * @s1: first input word to string to upper
 *
 *
 * Return: answer to change to upper
 */

char *cap_string(char *s1)
{
	int a = 0;
	int b = 0;
	int c[13] = {32, 33, 34, 9, 10, 44, 59, 46, 63, 40, 41, 123, 125};

	/*n = n / 8;*/
	while (s1[a] != '\0')
	{
		while (b < 13)
		{
			if (s1[a - 1] == c[b])
			{

				if (s1[a] > 96 && s1[a] < 123)
				{
					s1[a] = s1[a] - 32;
				}
			}
			b = b + 1;
		}
		b = 0;
		a = a + 1;
	}
	return (s1);
}
