#include "main.h"

/**
 * binary_to_uint - function that converts a binary number
 * to an unsigned int
 * @b: the string of chars
 * Return: the converted number or 0 if string has one or more
 * chars that is not 0 or 1, or if b is NULL
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (!b)
		return (0);

	for (; *b != '\0'; b++)
	{
		if (*b == '1')
			num = (num << 1) | 1;
		else if (*b == '0')
			num <<= 1;
		else
			return (0);
	}
	return (num);
}
