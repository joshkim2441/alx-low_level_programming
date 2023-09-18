#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: pinter to the string
 * Return 0
 */

void print_rev(char *s)
{
	int i, j, length;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	length = i;

	for (j = length - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
