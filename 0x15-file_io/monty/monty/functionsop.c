#include "monty.h"
/**
 * pushop - function to push int in a stack
 * @head: Head of the list
 * @count: line of the monty file
 * @element: int to push
 */
void pushop(stack_t **head, unsigned int count, char *element)
{
	int a = 0;
	int n;
	stack_t *new;

	while (element[a] != '\0')
	{
		if (element[a] < '0' && element[a] > '9')
		{
			dprintf(2, "L%d: usage: push integer\n", count);
			exit(EXIT_FAILURE); }
		a++;
	}

	n = atoi(element);
	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		dprintf(2, "Error: malloc failed\n");
		exit(EXIT_FAILURE); }
	if (*head == NULL)
	{
		new->n = n;
		new->prev = NULL;
		new->next = NULL;
		*head = new;
	}
	else
	{
		new->n = n;
		(*head)->prev = new;
		new->prev = NULL;
		new->next = *head;
		*head = new;
	}
}
/**
 * pallop - function to push int in a stack
 * @head: Head of the list
 * @count: line of the monty file
 */
void pallop(stack_t **head, unsigned int count)
{
	stack_t *temp;
	(void) count;

	if (*head == NULL)
		printf("es null");
	temp = *head;
	while (temp != NULL)
	{
		printf("%d\n", (temp)->n);
		temp = (temp)->next;
	}
}
/**
 * popop - function to del element in a stack
 * @head: Head of the list
 * @count: line of the monty file
 */
void popop(stack_t **head, unsigned int count)
{
	if (*head != NULL)
		delete_dnodeint_at_index(head, 0);
	else
	{
		dprintf(2, "L%d: can't pop an empty stack", count);
		exit(EXIT_FAILURE);
	}
}
/**
 * pintop - function to print top
 * @head: Head of the list
 * @count: line of the monty file
 */
void pintop(stack_t **head, unsigned int count)
{
	if (*head != NULL)
		printf("%d\n", (*head)->n);
	else
	{
		dprintf(2, "L%d: can't pint an empty stack", count);
		exit(EXIT_FAILURE);
	}
}
/**
 * subop - function to substract first two elements in a stack
 * @head: Head of the list
 * @count: line of the monty file
 */
void subop(stack_t **head, unsigned int count)
{
	if (*head != NULL)
		*head = (*head)->next;
	else
	{
		dprintf(2, "L%d: can't sub, stack too short", count);
		exit(EXIT_FAILURE);
	}
}
