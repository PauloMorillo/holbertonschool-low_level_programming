#include "hash_tables.h"
#include <string.h>
#include <stdio.h>
/**
 * hash_table_print - function to print all keys and values in hashtable
 * @ht: pointer to hashtable
 * Return: This function doenst return anything
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx = 0;
	hash_node_t *temp;
	int a = 0;

	if (ht && ht->array)
	{
		printf("{");
		while (idx < ht->size)
		{
			temp = ht->array[idx];
			while (temp != NULL)
			{
				if (a != 0)
					printf(", ");
				printf("'%s': '%s'", temp->key, temp->value);
				temp = temp->next;
				a++;
			}
			idx++;
		}
			printf("}\n");
	}
}
