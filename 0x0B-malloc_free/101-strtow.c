#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * **strtow - splits a string into words and
 * returns a pointer to an array of srings
 * @str: the split string
 * Return: NULL if str is NULL or ''
 * NULL on fail
 */

char **strtow(char *str)
{
	char **words;
	int x, y, z, l, word_cnt = 0, len;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	for (x = 0; str[x] != '\0'; x++)
		if ((str[x] != ' ' && str[x + 1] == ' ') ||
				(str[x] != ' ' && str[x + 1] == '\0'))
			word_cnt++;

	words = malloc((word_cnt + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	for (x = 0, z = 0; x < word_cnt; x++)
	{
		while (str[z] == ' ')
			z++;
		for (len = 0; str[z + len] != ' ' && str[z + len] != '\0'; len++)
			words[x] = malloc((len + 1) * sizeof(char));
		if (words[x] == NULL)
		{
			for (y = 0; y < x; y++)

				free(words[y]);
			free(words);
			return (NULL);
		}
		for (l = 0; l < len; l++)
			words[x][l] = str[z + l];
		words[x][l] = '\0';
		z += len;
	}
	words[x] = NULL;

	return (words);
}
