#include "main.h"
#include <stddef.h>

/**
 * *_strchr - locates a character in a string
 * @c: character to be located
 * @s: string with character to be located
 * Return: a pointer to the first occurence of
 * the character NULL if character not found
 */

char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
