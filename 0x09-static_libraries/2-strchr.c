#include "main.h"
/**
 * _strchr - the function locates a character in a string,
 * @s: the string.
 * @c: the character.
 * Return: a pointer to the first occurrence of the c character
 */
char *_strchr(char *s, char c)
{
	unsigned int p = 0;

	for (; *(s + p) != '\0'; p++)
		if (*(s + p) == c)
			return (s + p);
	if (*(s + p) == c)
		return (s + p);
	return ('\0');
}
