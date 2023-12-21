#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table to be updated with the key/value
 * @key: the key, not an empty string
 * @value: value associated with the key, must be duplicated
 * cannot be an empty string
 * Return: 1 for success, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node, *new_node;

	if (!ht || !key || !*key)
		return (0);

	index = hash_djb2((unsigned char *)key) % ht->size;
	node = ht->array[index];

	/*Check if key already exists in the list*/
	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	if (node) /*If key found, update value*/
	{
		free(node->value);
		node->value = strdup(value);
		if (!node->value)
			return (0);
	}
	else /*Else add new node at beginning of list*/
	{
		new_node = malloc(sizeof(hash_node_t));
		if (!new_node)
			return (0);

		new_node->key = strdup(key);
		new_node->value = strdup(value);
		if (!new_node->key || !new_node->value)
		{
			free(new_node);
			return (0);
		}

		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}

	return (1);
}
