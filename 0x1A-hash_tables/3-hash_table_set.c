#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_set - function to add elements in hashtable
 * @ht: pointer to hashtable
 * @key: Key to add in hash table
 * @value: value to add in hash table
 * Return: Index number which key and value should be store in hashtable
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *temp, *new;
	int flag = 0;

	if (key && strlen(key) > 0 && ht && value && ht->array)
	{
		idx = key_index((unsigned char *) key, ht->size);
		new = malloc(sizeof(hash_node_t));
		if (new == NULL)
			return (0);
		new->key = (char *)key;
		new->value = (char *)value;

		if (ht->array[idx] == NULL)
		{
			new->next =  NULL;
			ht->array[idx] = new;
		}
		else
		{
			temp = ht->array[idx];
			while (temp->next != NULL)
			{
				if (strcmp(temp->key, key) == 0)
				{
					free(temp->value);
					temp->value = (char *)value;
					flag = 1;
					free(new);
				}
				temp = temp->next;
			}
			if (flag == 0)
			{
				new->next = ht->array[idx];
				ht->array[idx] = new; }
		}
		return (1);
	}
	return (0);
}
