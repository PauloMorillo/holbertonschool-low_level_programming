#include "sort.h"
/**
 * insertion_sort_list - algorithm to sort a list
 * @list: list to sort in ascending order
 * Return: Do not return anything
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *tmp, *menor = NULL;
	int lenght = 0;

	if (!list)
	{
		return;
	}
	lenght = dlistint_len(*list);

	if (lenght < 2)
	{
		return;
	}
	tmp = (*list)->next;
	while (tmp != NULL)
	{
		if (tmp->n < tmp->prev->n)
		{
			menor = tmp;
			while (menor->prev)
			{
				if (menor->n < menor->prev->n)
				{
					swap_node(menor->prev, menor);
					if (menor->prev == NULL)
						*list = menor;
					print_list(*list);
					menor = menor->next;
				}
				menor = menor->prev;
			}
		}
			tmp = tmp->next;
	}
}


/**
 * swap_node - swaps node in list
 * @left: left node
 * @right: right node
 * Return: pointer to list
 */
listint_t *swap_node(listint_t *left, listint_t *right)
{
	listint_t *tempr;

	tempr = right;
	if (left->prev)
		left->prev->next = right;
	if (right->next)
		right->next->prev = left;
	left->next = right->next;
	right->prev = left->prev;
	right->next = left;
	left->prev = right;
	return (tempr);
}
#include <stdio.h>

/**
 * dlistint_len - function to return the length of the list
 * @h: pointer to head of the list
 * Return: length or number of nodes n
 */
size_t dlistint_len(const listint_t *h)
{
	int n = 0;

	while (h != NULL)
	{
		/* printf("%d\n", h->n); */
		n++;
		h = h->next;
	}
	return (n);
}
