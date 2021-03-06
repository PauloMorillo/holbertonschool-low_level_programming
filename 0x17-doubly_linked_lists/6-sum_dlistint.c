#include "lists.h"
#include <stdio.h>

/**
 * sum_dlistint - function to return the sum of all data
 * @head: pointer to head of the list
 * Return: the sum of all elements
 */
int sum_dlistint(dlistint_t *head)
{
	int sumans = 0;

	while (head != NULL)
	{
		sumans = sumans + head->n;
		head = head->next;
	}
	return (sumans);
}
