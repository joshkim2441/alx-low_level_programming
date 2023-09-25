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
	while (*s != '\0')
	{
		if (*s == *accept)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
