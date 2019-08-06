#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - remove the head note of a list
 * @head: pointer to the head of the list
 * Return: data to the removed node
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
