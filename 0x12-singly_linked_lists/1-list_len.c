#include "lists.h"
#include <stdio.h>

/**
 * list_len - print number of  elements of a list
 * @h: head of the list
 * Return: NUmber of nodes
 */
size_t list_len(const list_t *h)
{
	int leng = 0;

	while (h != NULL)
	{
		h = h->next;
		leng++;
	}
	return (leng);
}
