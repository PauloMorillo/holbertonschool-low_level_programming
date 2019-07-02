#include "holberton.h"
/**
 * rev_string - change positions of the string put in reverse
 * @s: input pointer
 *
 *
 */

void rev_string(char *s)
{
	int a1 = 0;
	int b = 0;
	char arr[] = " ";
	char *arre;

	arre = arr;

	while (s[a1] != '\0')
	{
		/*_putchar(s[a1]);*/
		a1 = a1 + 1;
	}
	while (a1 >= 0)
	{
		a1 = a1 - 1;
		arre[b] = s[a1];
		b = b + 1;
	}
	while (b >= 0)
	{
		s[b] = arre[b];
		b = b - 1;
	}
}
