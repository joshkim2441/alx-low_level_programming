#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *str_concat - concatenates two strings
 * @s1: string to be concatenated
 * @s2: string to be concatenated
 * Return: a pointer to a newly allocated space
 * in memory, NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *concat_str;

	int len_s1 = 0, len_s2 = 0;

	if (s1 != NULL)
		len_s1 = strlen(s1);
	if (s2 != NULL)
		len_s2 = strlen(s2);

	concat_str = malloc((len_s1 + len_s2 + 1) * sizeof(char));
	if (concat_str == NULL)
		return (NULL);

	if (s1 != NULL)
		strcpy(concat_str, s1);
	if (s2 != NULL)
		strcpy(concat_str + len_s1, s2);

	return (concat_str);
}
