#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - add new node at the end of a list
 * @head: pointer to head of the list
 * @str: name of new object for the element str
 * Return: The address of the new element or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int leng = 0;
	list_t *new;
	list_t *run;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	while (str[leng] != '\0')
	{
		leng++;
	}
	if (*head == NULL)
	{
		(*head) = new;
	}
	else
	{
		run = *head;
		while (run->next != NULL)
		{
			run = run->next;
		}
		run->next = new;
	}
	new->str = strdup(str);
	new->len = leng;
	new->next = NULL;
	return (new);
}
