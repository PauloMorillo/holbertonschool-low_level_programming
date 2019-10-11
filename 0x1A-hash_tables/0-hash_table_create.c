#include "hash_tables.h"
/**
 * hash_table_create - function to create a hash table reserving need it space
 * @size: size of hash table
 * Return: pointer to new hash table or null if it fails
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hasht;
	/* hash_node_t *hashn; */

	hasht = malloc(sizeof(hash_table_t));
	if (hasht == NULL)
		return (NULL);
	hasht->array = malloc(size * sizeof(hash_node_t *));
	hasht->size = size;
	return (hasht);


}
