#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - function to delete node at a given position
 * @head: pointer to head of the list
 * @index: position to index the value
 * Return: 1 or -1 if it fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int len = 0;
	listint_t *pb, *pe, *fr;

	if (*head == NULL)
		return (-1);
	if ((*head)->next == NULL)
		return (-1);
	pb = *head;
	pe = (pb)->next;
	if (index > 0)
	{
		while (pb != NULL && len < index - 1 && pe != NULL)
		{
			len = len + 1;
			pb = pb->next;
			pe = pe->next;
		}
		if (pe == NULL || len < (index - 1) || len > (index - 1))
			return (-1);
		fr = pe;
		free(pe);
		pb->next = fr->next;
		free(fr);
	}
	else
	{
		fr = *head;
		free(*head);
		*head = pe;
		if ((*head)->next == NULL)
		{
			*head = NULL;
			free(*head);
			free(pe);
			free(fr);
		}
	}
	return (1);
}
