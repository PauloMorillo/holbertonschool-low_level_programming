#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void free_listint2(listint_t **head)
{
	listint_t *fr;

	while (*head != NULL)
	{
		fr = (*head)->next;
		free(*head);
		*head = fr;
	}
	head = NULL;
	free(fr);
}
