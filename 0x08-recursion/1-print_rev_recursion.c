#include "holberton.h"
#include <stdio.h>
/**
 * _print_rev_recursion - print reverse string with recursive function
 * @s: string to print
 * Return: do not return
 */
void _print_rev_recursion(char *s)
{

	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
