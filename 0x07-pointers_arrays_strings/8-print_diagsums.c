#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two
 * diagonals of a square matrix of integers
 * @a: square matrix
 * @size: size of matrix
 * Return: 0
 */

void print_diagsums(int *a, int size)
{
	int k, sum1 = 0, sum2 = 0;

	for (k = 0; k < size; k++)
	{
		sum1 += a[k * size + k];
		sum2 += a[k * size + (size - k - 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
