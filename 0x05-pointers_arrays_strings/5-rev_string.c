#include "holberton.h"
#include <stdio.h>
/**
 *
 * rev_string - change positions of the string put in reverse
 *
 *
 *
 */

void rev_string(char *s)
{
	int a1 = 0;
	int b = 0;
	char arre [] = "";

	while (s[a1] != '\0')
	{
		/*_putchar(s[a1]);*/
		a1 = a1 + 1;
	}
	while (a1 >= 0)
        {
                arre[b]=s[a1];
                a1 = a1 - 1;
		b = b + 1;
        }
	/**puts("esto es lo del puts : ");
	 *puts(arre);
	 *puts("ya no es lo ");
	 */
}
