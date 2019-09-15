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
	current = *h;
	if (idx == 0)
	{
		new->next = current;
		new->prev = prev;
		*h = new;
		return (new);
	}
	next = current->next;
	while (current->next != NULL)
	{
		if (pos == idx)
		{
			new->next = current;
			new->prev = current->prev;
			prev->next = new;
			return (new);
		}
		prev = current;
		current = next;
		next = current->next;
		pos++;
	}
	if (pos == idx)
	{
		new->next = current;
		new->prev = current->prev;
		prev->next = new;
		return (new);
	}
	if (idx == pos + 1)
	{
		new->next = NULL;
		new->prev = current;
		current->next = new;
		return (new);
	}
	return (NULL);
}
