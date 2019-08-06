#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - add int element to the list
 *
 * Return: Address of new elements.
 */

int pop_listint(listint_t **head)
{
	int p;
	listint_t *P;

	if (*head == NULL)
		return (0);
	p = (*head)->n;
	P = (*head)->next;
	free(*head);
	*head = P;
	return (p);
}
