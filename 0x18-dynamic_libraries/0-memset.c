#include "main.h"

/**
 * *_memset - fills first n bytes of
 * memory area pointed to by s
 * @n: bytes of the memory are
 * @s: pointer to memory
 * @b: constant byte
 * Return: a pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}
	return (s);
}
