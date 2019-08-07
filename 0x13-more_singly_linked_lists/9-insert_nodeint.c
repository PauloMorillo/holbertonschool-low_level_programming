#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - function to add new node at a given position
 * @head: pointer to head of the list
 * @idx: position to index the value
 * @n: number to index in the list
 * Return: value of node according to index or null if it fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int len = 0;
	listint_t *p, *new;

	p = *head;
	if (idx > 0)
	{
		while (p != NULL && len < idx - 1)
		{
			len = len + 1;
			p = (p)->next;
		}
		if (p == NULL || len < (idx - 1))
			return (NULL);
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = p->next;
		p->next = new;
		return (new);
	}
	else
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = (*head);
		*head = new;
		return (new);
	}
	return (NULL);
}
