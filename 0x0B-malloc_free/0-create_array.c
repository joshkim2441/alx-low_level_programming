#include "main.h"
#include <stdlib.h>
/**
 * *create_array - creates an array of characters
 * and initializes it with a specific character.
 * @size: the array of characters
 * @c: the special character
 * Return: NULL if size is 0
 * a pointer to the array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
