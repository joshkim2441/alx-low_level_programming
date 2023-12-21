#include "hash_tables.h"

/**
 * hash_table_print - prints a has table
 * @ht: the hash table
 * Return: print the key value, dont't print if ht is NULL
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	char *sep = "";

	if (!ht)
		return;

	printf("{");

	/*Traverse the array of the hash table*/
	for (i = 0; i < ht->size; i++)
	{
		for (node = ht->array[i]; node != NULL; node = node->next)
		{
			printf("%s'%s': '%s'", sep, node->key, node->value);
			sep = ", ";
		}
	}

	printf("}\n");
}
