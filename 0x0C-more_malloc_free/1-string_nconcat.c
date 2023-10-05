#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * *string_nconcat - concatenates two strings
 * @s1: string to be concatenated
 * @s2: string to be concatenated
 * @n: bytes of s2
 * Return: point to a newly allocated memory
 * NULL on failure, treat as an empty string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat_str;
	unsigned int i, concat_len = 0, s1_len = 0, s2_len = 0;

	if (s1 != NULL)
		for (i = 0; s1[i]; i++)
			s1_len++;
	if (s2 != NULL)
		for (i = 0; s2[i]; i++)
			s2_len++;

	if (n >= s2_len)
		concat_len = s1_len + s2_len + 1;
	else
		concat_len = s1_len + n + 1;

	concat_str = malloc(sizeof(char) * concat_len);
	if (concat_str == NULL)
		return (NULL);

	for (i = 0; i < concat_len - 1; i++)
		if (i < s1_len)
			concat_str[i] = s1[i];
		else
			concat_str[i] = s2[i - s1_len];

	concat_str[concat_len - 1] = '\0';

	return (concat_str);
}
