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
	dlistint_t *new, *prev = NULL, *current;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	current = *h;
	if (idx == 0 && *h == NULL)
	{
		*h = new;
		return (new);
	}
	if (idx == 0)
	{
		current->prev = new;
		new->next = current;
		new->prev = prev;
		*h = new;
		return (new);
	}
	while (current->next != NULL)
	{
		if (pos == idx)
			return (mid(current, new, prev));
		prev = current;
		current = current->next;
		pos++;
	}
	if (pos == idx)
		return (mid(current, new, prev));
	if (idx == pos + 1)
	{
		new->next = NULL;
		new->prev = current;
		current->next = new;
		return (new);
	}
	return (NULL);
}
/**
 * mid - funtion to index at mid of the list
 * @current: pinter to current position
 * @new: pointer to new node
 * @prev: pointer to previous node
 * Return: New node
 */
dlistint_t *mid(dlistint_t *current, dlistint_t *new, dlistint_t *prev)
{
	new->next = current;
	new->prev = current->prev;
	prev->next = new;
	current->prev = new;
	return (new);
}
