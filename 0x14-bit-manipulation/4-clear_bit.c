#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at given index
 * @n: the bit to set
 * @index: the index starting from 0 of bit to set
 * Return: 1 if success, -1 if error occurs
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(*n) * 8 - 1))
		return (-1);
	*n &= ~(1UL << index);
	return (1);
}
