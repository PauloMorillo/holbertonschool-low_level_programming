#include "lists.h"
#include <stdio.h>

/**
 * print_list - print elements of a list
 * @h: head of the list
 * Return: NUmber of nodes
 */
size_t print_list(const list_t *h)
{
	char *s;
	unsigned int lenb = 0;
	int leng = 0;

	while (h != NULL)
	{
		s = (*h).str;
		lenb = h->len;
		if (s == NULL)
		{
			s = "(nil)";
			lenb = 0;
		}
		printf("[%u] %s\n", lenb, s);
		h = h->next;
		leng++;
	}
	return (leng);
}
