#include "holberton.h"
#include <stdio.h>
/**
 * _strlen_recursion - print reverse string with recursive function
 * @s: string to print
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int a = 0;



	if (*s != '\0')
	{
		a = 1;
		return (a + (_strlen_recursion(s + 1)));
	}
	return (0);
}
