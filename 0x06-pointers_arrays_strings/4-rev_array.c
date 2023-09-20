#include "main.h"

/**
 * reverse_array - reverses the content of
 * an array of integers
 * @n: number of elements in the array
 * @a: the array of integers
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int temp;

	int start = 0;

	int end = n - 1;

	while (start < end)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}
}
