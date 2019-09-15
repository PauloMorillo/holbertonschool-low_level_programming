#include "lists.h"
#include <stdio.h>

/**
 * add_dnodeint - function to adds a new node at the beginning
 * @head: pointer to head of the list
 * @n: new number to add in the list
 * Return: length or number of nodes n
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		new->n = n;
		new->prev = NULL;
		new->next = NULL;
		*head = new;
	}
	else
	{
		new->n = n;
		(*head)->prev = new;
		new->prev = NULL;
		new->next = *head;
		*head = new;
	}
	return (new);
}
