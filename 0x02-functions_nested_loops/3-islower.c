#include "holberton.h"
#include <ctype.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _islower(int c)
{
int res;
	
res = islower(c);
if (res == 0)
{
return (0);

}
else {
return (1);
}
}
