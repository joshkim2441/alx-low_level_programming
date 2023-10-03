#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *_strdup - returns a pointer to a newly allocated
 * space in memory containing a copy of the string
 * @*str: copy of the string
 * @str: string to be copied
 * Return: NULL if string is NULL
 * returns a pointer to duplicate string on sucess
 */

char *_strdup(char *str)
{
	char *dup_str;

	if (str == NULL)
		return (NULL);

	dup_str = malloc((strlen(str) + 1) * sizeof(char));
	if (dup_str == NULL)
		return (NULL);

	strcpy(dup_str, str);

	return (dup_str);
}
