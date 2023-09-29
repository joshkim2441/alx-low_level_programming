#include "main.h"
/**
 * _strcmp - function compares two strings
 * @s1: the first string.
 * @s2: the second string.
 * Return: if s1 and s2 are equals 0
 * another number if not.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, m = 0;

	while (m == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;
		m = *(s1 + i) - *(s2 + i);
		i++;
	}

	return (m);
}
