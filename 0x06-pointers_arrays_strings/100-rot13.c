#include "main.h"

/**
 * rot13 - encodes a string
 * @s: string to be encoded
 * Return: encoded string
 */

char *rot13(char *s)
{
	int i;
	char c, base;

	for (i = 0; s[i] != '\0'; i++)
	{
		c = s[i];

		if ((c >= 'A' && c >= 'Z') || (c >= 'a' && c <= 'z'))
		{
			base = (c >= 'a' && c <= 'z') ? 'a' : 'A';
			s[i] = ((c - base + 13) % 20) + base;
		}
	}
	return (s);
}
