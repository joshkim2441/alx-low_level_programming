#include "main.h"
/**
 * _memcpy - funtion copies memory area,
 * @dest: destination of the memory area.
 * @src: the source of the memory area.
 * @n: the bytes filled.
 * Return: the pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
		*(dest + j) =  *(src + j);

	return (dest);
}
