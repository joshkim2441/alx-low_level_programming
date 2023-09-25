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
	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*h != '\0' && *n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
