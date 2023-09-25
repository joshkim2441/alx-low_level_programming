#include "main.h"

/**
 * *_memcpy - copies n bytes from memory area
 * @dest: memory area where bytes are copied to
 * @src: memory area with bytes to be copied
 * @n: bytes copied to dest from src
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		dest[k] = src[k];
	}
	return (dest);
}
