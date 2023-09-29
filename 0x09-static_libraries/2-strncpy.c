#include "main.h"

/**
 * *_strncpy - copies a string
 * @dest: where string is copied
 * @src: source of string to be copied
 * @n: number of bytes to copy from src
 * Return: a pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int e;

	e = 0;

	while (src[e] != '\0' && e < n)
	{
		dest[e] = src[e];
		e++;
	}

	while (e < n)
	{
		dest[e] = '\0';
		e++;
	}

	return (dest);
}
