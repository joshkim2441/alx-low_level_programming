#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - it executes a function
 * given as a parameter on each aray element
 * @array: the parameters as functions
 * @size: the size of the array
 * @action: a pointer to the function used
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (!array || !action)
		return;

	for (x = 0; x < size; x++)
		action(array[x]);
}
