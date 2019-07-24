l#include "function_pointers.h"
/**
 * print_name - call a pointer function to print name
 * @name: the name to print
 * @f: pointer to function
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		(*f)(name);
	}
}
