#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to be encoded
 * Return: 0
 */

char *leet(char *s)
{
	int x, y;

	char *a = "A4a4E3e3O0o0T7t7L1l1";

	for (x = 0; s[x]; x++)
	{
		for (y = 0; a[y]; y += 2)
		{
			if (s[x] == a[y])
			{
				s[x] = a[y + 1];
				break;
			}
		}
	}
	return (s);
}
