#include "hash_tables.h"

/**
 * key_index - gets the index of a key
 * @key: the key
 * @size: the hash table array size
 * Return: the index at which the key/value pair should be
 * 	stored in the array of the hash table
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value = hash_djb2(key);

	unsigned long int index = hash_value % size;

	return (index);
}
