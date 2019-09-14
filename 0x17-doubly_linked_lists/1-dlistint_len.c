#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - function to return the length of the list
 * @h: pointer to head of the list
 * Return: length or number of nodes n
 */
size_t dlistint_len(const dlistint_t *h)
{
	int n = 0;

	while (h != NULL)
	{
		/* printf("%d\n", h->n); */
		n++;
		h = h->next;
	}
	return (n);
}
