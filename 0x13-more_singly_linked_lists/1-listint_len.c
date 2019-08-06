#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - function to know the list length
 * @h: pointer to the head of the list
 * Return: length of the list
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
