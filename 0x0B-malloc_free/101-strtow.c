#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * word_cnt - counts number of words in string
 * @st: string to evaluate
 * Return: word count.
 */

int word_cnt(char *st)
{
	int flg, x, y;

	flg = 0;
	y = 0;

	for (x = 0; st[x] != '\0'; x++)
	{
		if (st[x] == ' ')
			flg = 0;
		else if (flg == 0)
		{
			flg = 1;
			y++;
		}
	}
	return (y);
}

/**
 * **strtow - splits a string into words and
 * returns a pointer to an array of srings
 * @str: the split string
 * Return: NULL if str is NULL or ''
 * NULL on fail
 */

char **strtow(char *str)
{
	char **grid, *temp;
	int y, z = 0, words, len = 0, x = 0, strt, end;

	while (*(str + len))
		len++;
	words = word_cnt(str);
	if (words == 0)
		return (NULL);

	grid = (char **) malloc(sizeof(char *) * (words + 1));
	if (grid == NULL)
		return (NULL);

	for (y = 0; y <= len; y++)
	{
		if (str[y] == ' ' || str[y] == '\0')
		{
			if (x)
			{
				end = y;
				temp = (char *) malloc(sizeof(char) * (x + 1));
				if (temp == NULL)
					return (NULL);
				while (strt < end)
					*temp++ = str[strt++];
				*temp = '\0';
				grid[z] = temp - x;
				z++;
				x = 0;
			}
		}
		else if (x++ == 0)
			strt = y;
	}
	grid[z] = NULL;
	return (grid);
}
