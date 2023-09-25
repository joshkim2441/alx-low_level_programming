#include "main.h"
#include <stddef.h>

/**
 * *_strstr - locates a substring
 * @needle: substring searched for
 * @haystack: string searched
 * Return: a pointer to the beginning
 * of located substring NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
	int b, d;

	for (b = 0; *needle != '\0'; b++)
	{
		for (d = 0; haystack[d] != '\0'; d++)
		{
			if (*needle == haystack[d])
				{
					return (needle);
				}
		}
		needle++;
	}
	return (NULL);
}
