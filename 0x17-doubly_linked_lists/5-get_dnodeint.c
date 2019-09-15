#include "lists.h"
#include <stdio.h>

/**
 * get_dnodeint_at_index - function to return the length of the list
 * @head: pointer to head of the list
 * @index: position to index
 * Return: pointer to position to index or Null if it doesn't exit
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n = 0;

	while (head != NULL)
	{
		/* printf("%d\n", h->n); */
		if (n == index)
			return (head);
		head = head->next;
		n++;
	}
	return (NULL);
}
