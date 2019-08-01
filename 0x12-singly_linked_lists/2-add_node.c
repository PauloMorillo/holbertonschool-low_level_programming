#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_node - add new node at the beginning of a list
 * @head: pointer to head of the list
 * @str: name of new object
 * Return: The address of the new element or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	char *s;
	unsigned int leng = 0;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	s = malloc(sizeof(str) + 1);
	if (s == NULL)
		return (NULL);
	while (str != NULL && str[leng] != '\0')
	{
		s[leng] = str[leng];
		leng++;
	}
	s[leng] = '\0';

	new->str = s;
	new->len = leng;
	new->next = *head;
	*head = new;
	return (*head);
}
