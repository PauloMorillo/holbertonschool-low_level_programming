#include "holberton.h"
#include <stdio.h>
/**
 * _strcpy - print all posix
 * @dest: input strings
 * @src: input length of array
 * Return: Pointer
 */

char *_strcpy(char *dest, char *src)
{
	/*int c = 0;*/
	int a = 0;
	int b = 0;

	while (src[a] != '\0')
	{
		a = a + 1;
	}
	/*printf("%d longitud",a);*/
	while (b <= a)
	{
		/*if (b == (a - 1))
		{
			dest[b] = '\0';
		}
		else
		{*/
			dest[b] = src[b];
			/*}*/
		b = b + 1;
	}
	return (dest);
}
