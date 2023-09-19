#include "main.h"

/**
 * _strncat - concatenates two strings
 * @n: number of bytes used from src
 * @dest: string to be concatenated
 * @src: string to be concatenated
 * Return: a pointer to the resulting
 * string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	x = 0;
	y = 0;

	while (dest[x] != '\0')
		x++;

	while (src[y] != '\0' && y < n)
	{
		dest[x] = src[y];
		x++;
		y++;

	}

	dest[x] = '\0';

	return (dest);
}
