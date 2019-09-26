#ifndef _MONTY_H_
#define _MONTY_H_
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void processl(char **toks1, stack_t **head, unsigned int count, char *line);
char **tokenizeline(char *line);
void *_calloc(unsigned int nmemb, unsigned int size);
int _strcmp(char *s1, char *s2);
void pushop(stack_t **head, unsigned int count, char *element);
void pallop(stack_t **head, unsigned int count);
void pintop(stack_t **head, unsigned int count);
void nopop(stack_t **head, unsigned int count);
void subop(stack_t **head, unsigned int count);
void popop(stack_t **head, unsigned int count);
void swapop(stack_t **head, unsigned int count);
void addop(stack_t **head, unsigned int count);
void free_dlistint(stack_t *head);
int delete_dnodeint_at_index(stack_t **head, unsigned int index);
size_t dlistint_len(stack_t *h);
#endif
