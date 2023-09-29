#include "main.h"
#include <stddef.h>

/**
 * *_strpbrk - locates the first occurence of
 * accept bytes in the string s
 * @s: the string searched
 * @accept: string with matching bytes
 * Return: a pointer to the s byte matching the
 * accept byte NULL if not found
 */

char *_strpbrk(char *s, char *accept)
{
	int x, y;

	for (x = 0; *s != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (*s == accept[y])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
