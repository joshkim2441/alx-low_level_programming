#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table
 * Return: None
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node, *tmp;

	if (!ht)
		return;
	/*Tranverse the array of the hash table */
	for (i = 0; i < ht->size; i++)
	{
		/*Traverse the linked list at this index and free eaach node*/
		node = ht->array[i];
		while (node)
		{
			tmp = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = tmp;
		}
	}

	/*Free the array and the hash table itself*/
	free(ht->array);
	free(ht);
}
