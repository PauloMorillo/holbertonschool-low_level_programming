#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - call a pointer function to print name
 * @name: the name to print
 * @f: pointer to function
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
	{
		(*f)(name);
	}
}
