#include "main.h"

/**
 * flip_bits - returns number of bits needed to flip
 * to get from one number to another
 * @n: the bits to be flipped
 * @m: the number of bits needed to flip
 * Return: the number of bits needed
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int count = 0;

	while (xor)
	{
		count += xor & 1;
		xor >>= 1;
	}
	return (count);
}
