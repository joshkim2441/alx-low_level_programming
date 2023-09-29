#include "main.h"

/**
 * _strpbrk - function searches a string for any of a set of bytes.
 * @s: the first string.
 * @accept: the second string.
 * Return: a pointer to the byte in s matching one of the
 * bytes in accept, NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, k;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (k = 0; *(accept + k) != '\0'; k++)
		{
			if (*(s + i) == *(accept + k))
				return (s + i);
		}
	}
	return ('\0');
}
