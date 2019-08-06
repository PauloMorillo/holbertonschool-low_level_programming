#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - free list memory
 * @head: pointer to the head of the list
 * Return: do not return
 */

void free_listint(listint_t *head)
{
	listint_t *fr;

	if (head != NULL)
	{
		while (head != NULL)
		{
			fr = head->next;
			free(head);
			head = fr;
		}
		free(fr);
	}
}
