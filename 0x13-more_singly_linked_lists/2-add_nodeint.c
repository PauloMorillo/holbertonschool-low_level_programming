#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - add int element to the list
 * @head: pointer to the head of the list
 * @n: number to add to the top of the list
 * Return: Address of new elements.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *p;

	p = malloc(sizeof(listint_t));
	if (p == NULL)
		return (NULL);
	p->n = n;
	p->next = *head;
	*head = p;
	return (p);
}
