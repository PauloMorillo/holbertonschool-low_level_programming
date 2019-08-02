#include "lists.h"
#include <stdlib.h>

/**
 * free_list - print elements of a list
 * @head: head of the list
 * Return: do not return
 */
void free_list(list_t *head)
{
	if (head != NULL)
	{
		free(head->str);
		free(head->next);
		free(head);
	}
}
