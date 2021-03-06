#include "lists.h"
#include <stdio.h>

/**
 * add_dnodeint_end - function to adds a new node at the end
 * @head: pointer to head of the list
 * @n: new number to add in the list
 * Return: length or number of nodes n
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *currentno;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head == NULL)
	{
		new->prev = NULL;
		new->next = *head;
		*head = new;
	}
	else
	{
		currentno = *head;
		while (currentno->next != NULL)
		{
			currentno = currentno->next;
		}
		new->prev = currentno;
		currentno->next = new;
		new->next = NULL;
	}
	return (new);
}
