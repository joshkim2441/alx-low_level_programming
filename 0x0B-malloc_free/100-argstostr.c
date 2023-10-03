#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *argstostr - concatenates all arguments of my program
 * @ac: argument count.
 * @av: the arguments.
 * Return: a pointer to a new string, NULL on fail
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int len = 0, x, y, z = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
		len += strlen(av[x]) + 1;

	str = malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++, z++)
			str[z] = av[x][y];
		str[z++] = '\n';
	}
	str[z] = '\0';

	return (str);
}
