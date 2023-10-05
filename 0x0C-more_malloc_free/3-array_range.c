#include "main.h"
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 * @min: minimum range of array
 * @max: maximum range of array
 * Return: the pointer to the newly created array
 * NULL if min is greater than max or if malloc fails
 */

int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * ((max - min) + 1));
		if (array == NULL)
			return (NULL);

		for (i = 0; min <= max; i++, min++)
			array[i] = min;

		return (array);
}
