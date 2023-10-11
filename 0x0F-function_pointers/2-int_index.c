#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - searches for an integer
 * @size: number of elements in the array
 * @cmp: pointer to compare values
 * @array: the elements
 * Return: index of first element if cmp doesn't return 0
 * -1 if no element matches or size is greater or equal to 0
 */

int int_index(int *array, int size, int(*cmp)(int))
{
	int y;

	if (array && cmp)
	{
		for (y = 0; y < size; y++)
		{
			if (cmp(array[y]) != 0)
				return (y);
		}
	}
	return (-1);
}
