#include "main.h"

/**
 * _strstr - function finds the first
 * occurrence of the substring.
 * needle in the string haystack.
 * @haystack: the entire string.
 * @needle: the substring.
 * Return: a pointer to the beginning of located substring,
 * NULL if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
	char *stack;
	char *pneedle;

	while (*haystack != '\0')
	{
		stack = haystack;
		pneedle = needle;

		while (*haystack != '\0' && *pneedle != '\0' && *haystack == *pneedle)
		{
			haystack++;
			pneedle++;
		}
		if (!*pneedle)
			return (stack);
		haystack = stack + 1;
	}
	return (0);
}
