#include "main.h"

/**
 * *_strcat - a function to commute strings
 * @dest: the param pointer to a char
 * @src: the param pointer to a char
 * Return: the return value of dest
 */

char *_strcat(char *dest, char *src)
{
	int a;
	int j;

	a = 0;
	j = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[j] != '\0')
	{
		dest[a] = src[j];
		j++;
		a++;
	}

	dest[a] = '\0';
	return (dest);
}
