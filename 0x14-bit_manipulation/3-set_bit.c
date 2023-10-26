#include "main.h"

/**
 * set_bit - function that sets a bit to 1 at given index
 * @n: the bit to set
 * @index: the index starting from 0 of bit to set
 * Return: 1 for success, -1 for error
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(*n) * 8 - 1))
		return (-1);
	*n |= 1UL << index;
	return (1);
}