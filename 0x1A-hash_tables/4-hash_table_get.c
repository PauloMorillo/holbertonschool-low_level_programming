#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_get - function to get value in hashtable
 * @ht: pointer to hashtable
 * @key: Key to add in hash table
 * Return: Index number which key and value should be store in hashtable
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *temp;

	if (key && strlen(key) > 0 && ht && ht->array)
	{
		idx = key_index((unsigned char *) key, ht->size);

		temp = ht->array[idx];
		while (temp != NULL)
		{
			if (strcmp(temp->key, key) == 0)
				return (temp->value);
			temp = temp->next;
		}
	}
	return (NULL);
}
