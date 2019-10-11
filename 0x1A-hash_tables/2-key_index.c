#include "hash_tables.h"
/**
 * key_index - function to get the index of a key
 * @size: size of hash table
 * @key: Key to get space in table
 * Return: Index number which key and value should be store in hashtable
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx;
	/* hash_node_t *hashn; */

	/* if (key) */
	/* { */
	idx = (hash_djb2(key)) % size;
	return (idx);
	/* } */

}
