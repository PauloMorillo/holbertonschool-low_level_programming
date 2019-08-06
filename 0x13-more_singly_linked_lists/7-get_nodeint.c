#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - function to get a specific node
 * @head: pointer to head of the list
 * @index: number to index in list
 * Return: value of node according to index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int len = 0;

	if (head == NULL)
		return (NULL);
	while (head != NULL && len < index)
	{
		len = len + 1;
		head = head->next;
	}
	return (head);
}
