#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - free memory and return null
 * @head: pointer to the head of the list
 * Return: do not return
 */

void free_listint2(listint_t **head)
{
	listint_t *fr;

	if (head != NULL)
	{
		while (*head != NULL)
		{
			fr = (*head)->next;
			free(*head);
			*head = fr;
		}
		head = NULL;
		free(fr);
	}
}
