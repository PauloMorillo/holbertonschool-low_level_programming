#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - function to sum all numbers in a list
 * @head: pointer to head of the list
 * Return: value of node according to index
 */

int sum_listint(listint_t *head)
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
