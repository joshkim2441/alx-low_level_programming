#include "main.h"

/**
 * *_strcat - function to commute strings
 * @dest: param pointer to a dest char
 * @src: param pointer to a src char
 * Return: return value of dest
 */

char *_strcat(char *dest, char *src)
{
	int x;
	int j;

	x = 0;
	j = 0;

	while (dest[x] != '\0')
	{
		x++;
	}
	while (src[j] != '\0')
	{
		dest[x] = src[j];
		j++;
		x++;
	}

	dest[x] = '\0';
	return (dest);
}
