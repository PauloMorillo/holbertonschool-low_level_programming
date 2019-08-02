#include "lists.h"
#include <stdlib.h>

/**
 * free_list - print elements of a list
 * @head: head of the list
 * Return: do not return
 */
void free_list(list_t *head)
{
	/*list_t *lim;*/

	if (head != NULL)
	{
		while (head != NULL)
		{
			/*lim = head->next;*/
			free(head->str);
			free(head);
			head = head->next;
			/*head = lim;*/
		}
	}
}
