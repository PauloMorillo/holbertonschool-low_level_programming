#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - function to index a new element in a list
 * @head: pointer to head of the list
 * @idx: position to index element
 * @n: element to index in list
 * Return: value of node according to index
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
