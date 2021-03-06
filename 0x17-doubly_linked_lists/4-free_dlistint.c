#include "lists.h"
#include <stdio.h>

/**
 * free_dlistint - function to free memory with doubly linked list elements
 * @head: pointer to head of the list
 * Return: Do not return
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *currentno;

	currentno = head;
	while (currentno != NULL)
	{
		currentno = head->next;
		free(head);
		head = currentno;
	}
}
