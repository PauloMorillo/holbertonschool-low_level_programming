#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - function to print all doubly linked list elements
 * @h: pointer to head of the list
 * Return: length or number of nodes n
 */
size_t print_dlistint(const dlistint_t *h)
{
	int n = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		n++;
		h = h->next;
	}
	return (n);
}
