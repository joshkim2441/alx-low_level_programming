#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of the array
 * Return: a pointer to newly created hash table, NULL if fail
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	unsigned long int j;

	/**Allocate memory for the new
	 * hash_table_t struct
	*/
	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
	{
		return (NULL);
	}
	/* initialize the size number*/
	new_table->size = size;
	new_table->array = malloc(sizeof(hash_node_t *) * size);
	if (new_table->array == NULL)
		return (NULL);
	for (j = 0; j < size; j++)
		new_table->array[j] = NULL;

	return (new_table);
}
