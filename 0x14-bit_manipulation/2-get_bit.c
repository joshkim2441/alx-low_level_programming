#include "main.h"

/**
 * get_bit - function that gets the value of a bit at certain index
 * @n: the number to evaluate
 * @index: the index of the bit to get starting from 0
 * Return: the value of the bit at the index, if error -1
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(n) * 8 - 1))
		return (-1);
	return ((n >> index) & 1);
}
