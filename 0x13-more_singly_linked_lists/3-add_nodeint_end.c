#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - add int element to the list
 *
 * Return: Address of new elements.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *p;
	listint_t *s;

	p = malloc(sizeof(listint_t));
	if (p == NULL)
		return (NULL);
	if ((*head) == NULL)
	{
		p->n = n;
		p->next = NULL;
		*head = p;
		return (p);
	}
	s = *head;
	while (s->next != NULL)
	{
		s = (s)->next;
	}
	s->next = p;
	p->n = n;
	p->next = NULL;
	return (p);
}
