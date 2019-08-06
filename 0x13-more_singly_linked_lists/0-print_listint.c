#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - print a list of integers
 * @h: pointer to the head of the list
 * Return: length of the list
 */

size_t print_listint(const listint_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		len = len + 1;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (len);
}
