#include "lists.h"
#include <stdio.h>

/**
 * insert_dnodeint_at_index - function to index an element in a doubly list
 * @h: pointer to head of the list
 * @idx: position to index
 * @n: number to index
 * Return: pointer to new node or Null if it doesn't exit
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int pos = 0;
	dlistint_t *new, *next = NULL, *prev = NULL, *current;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = prev;
	new->next = next;
	if (*h == NULL)
		*h = new;
	else
	{
		if (idx == 0)
		{
			new->next = (*h)->next;
			*h = new;
		}
		current = *h;
		next = (*h)->next;
		while (next != NULL)
		{
			if (pos == idx - 1)
			{
				new->next = next;
				new->prev = prev;
				current->next = new;
			}
			prev = current;
			current = next;
			next = current->next;
			pos++;
		}
		if (idx > pos + 1)
			return (NULL);
		if (idx == pos + 1)
		{
			new->prev = prev;
			current->next = new;
		}
	}
	return (new);
}
