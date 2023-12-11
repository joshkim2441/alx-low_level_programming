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
	int x;

	while (1)
	{
		x = *s++;
		if (x == c)
		{
			return (s - 1);
		}
		if (x == 0)
		{
			return (NULL);
		}
	}
}
