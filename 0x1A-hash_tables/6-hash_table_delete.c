#include "hash_tables.h"
#include <string.h>
#include <stdio.h>
/**
 * hash_table_delete - function to delete all keys and values in hashtable
 * @ht: pointer to hashtable
 * Return: This function doenst return anything
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int idx = 0;
	hash_node_t *temp, *head;

	if (ht && ht->array)
	{
		while (idx < ht->size)
		{
			if (ht->array[idx])
			{
				head = temp = ht->array[idx];
				while (head != NULL)
				{
					free(head->key);
					free(head->value);
					head = head->next;
					free(temp);
					temp = head;
				}
				free(temp);
			}
			idx++;
		}
		free(ht->array);
		free(ht);
	}
}
