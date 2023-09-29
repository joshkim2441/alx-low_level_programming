#include "main.h"

/**
 * _strspn - function gets the length of a prefix substring.
 * @s: the initial segment.
 * @accept: the accepted bytes.
 * Return: number of accepted bytes.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int f, j, bool;

	for (f = 0; *(s + f) != '\0'; f++)
	{
		bool = 1;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + f) == *(accept + j))
			{
				bool = 0;
				break;
			}
		}
		if (bool == 1)
			break;
	}
	return (f);
}
