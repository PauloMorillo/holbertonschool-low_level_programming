#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - print a list of integers
 * @h: pointer to the head of the list
 * Return: length of the list
 */

size_t print_listint_safe(const listint_t *head)
{
	int len = 0;
	const listint_t *p;

	p = head;
	if (p == NULL)
		exit(98);
	while (p->next != NULL)
	{
		len = len + 1;
		printf("[%p] %d\n", (void *)p, (p)->n);
		p = (p)->next;
	}
	return (len);
}
