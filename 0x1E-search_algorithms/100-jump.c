#include "search_algos.h"
/**
 * jump_search - Searches for a value in a sorted array of integers
 * using the Jump Search Algorithm
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: The first index where value is located
*/

int jump_search(int *array, size_t size, int value)
{
	int index, jump, i, step;

	if (array == NULL || size == 0)
		return (-1);

	/* Compute jump step */
	step = (int)sqrt((double)size);
	i = 0;
	jump = index = 0;
	while (index < (int)size && array[index] < value)
	{
		printf("Value checked array[%d] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
		i++;
		jump = index;
		index = i * step;
	}

	printf("Value found between indexes [%d] and [%d]\n", jump, index);

	/* Perform linear search */
	for (; jump <= index && jump < (int)size; jump++)
	{
		printf("Value checked array[%d] = [%d]\n", jump, array[jump]);
		if (array[jump] == value)
			return (jump);
	}

	return (-1);
}
