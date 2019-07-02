#include "holberton.h"
/**
 * puts2 - print all strings with step 2
 * @str: input strings
 *
 *
 */

void puts2(char *str)
{
	int a1 = 0;
	int c = 0;

	while (str[a1] != '\0')
	{
		/*_putchar(s[a1]);*/
		a1 = a1 + 1;
	}
	while (c < a1)
	{
		_putchar(str[c]);
		c = c + 2;
	}
	_putchar('\n');
}
