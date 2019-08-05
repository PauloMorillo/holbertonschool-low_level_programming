#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

size_t listint_len(const listint_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		len = len + 1;
		h = h->next;
	}
	return (len);
}
