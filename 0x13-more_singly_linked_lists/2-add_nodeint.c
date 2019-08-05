#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */


{
	int len = 0;

	while (h != NULL)
	{
		len = len + 1;
		h = h->next;
	}
	return (len);
}
