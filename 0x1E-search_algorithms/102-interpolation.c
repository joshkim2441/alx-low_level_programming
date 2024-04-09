#include "search_algos.h"
/**
 * interpolation_search - Searches for a value in a sorted array
 * of integers using Interpolation Search Algorithm
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: The first index where value is located
*/

int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low = 0, hi = size - 1;
	double j;

	if (array == NULL)
		return (-1);

	while (size)
	{
		j = (double)(hi - low) / (array[hi] - array[low]) * (value - array[low]);
		pos = (size_t)(low + j);
		printf("Value checked array[%d]", (int)pos);

		if (pos >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", array[pos]);
		}

		if (array[pos] == value)
			return ((int)pos);
		if (array[pos] < value)
			low = pos + 1;
		else
			hi = pos - 1;
		if (low == hi)
			break;
	}

	return (-1);
}
