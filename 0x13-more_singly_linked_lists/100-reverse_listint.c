#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - reverse list
 * @head: pointer to the head of the list
 * Return: address new head
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *p, *se;

	p = NULL;
	if (*head == NULL)
		return (NULL);
	while (*head != NULL)
	{
		se = (*head)->next;
		(*head)->next = p;
		 p = *head;
		(*head) = se;
	}
	*head = p;
	return (*head);
}
