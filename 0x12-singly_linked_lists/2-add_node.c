#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node - add new node at the beginning of a list
 * @head: pointer to head of the list
 * @str: name of new object
 * Return: The address of the new element or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int leng = 0;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL || head == NULL)
		return (NULL);
	while (str[leng] != '\0')
	{
		leng++;
	}
	new->str = strdup(str);
	new->len = leng;
	new->next = *head;
	*head = new;
	return (new);
}
