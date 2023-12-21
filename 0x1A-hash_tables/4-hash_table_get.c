#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the hash table to look into
 * @key: the key sought
 * Return: the value associated with the element, NULL if key not found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (!ht || !key || !*key)
		return (NULL);

	index = hash_djb2((unsigned char *)key) % ht->size;
	node = ht->array[index];

	/**Traverse the linked list at this index to find key*/
	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	if (node)
		return (node->value); /*key found, return value*/
	else
		return (NULL); /*key not found*/
}
