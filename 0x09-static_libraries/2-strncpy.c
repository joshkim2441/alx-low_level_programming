#include "main.h"
/**
 * _strncpy - the function copies a string
 * @dest: the destination.
 * @src: the source.
 * @n: the amount of bytes copied from src.
 * Return: a pointer to dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int y;

	for (y = 0; y < n && src[y] != '\0'; y++)
		dest[y] = src[y];
	for ( ; y < n; y++)
		dest[y] = '\0';

	return (dest);
}
