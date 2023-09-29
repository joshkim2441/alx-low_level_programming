#include "main.h"

/**
 * _puts - function prints a string, followed by a new line,
 * @str: a pointer to the string to be printed
 * Return: void
 */

void _puts(char *str)
{
	int z = 0;

	while (str[z])
	{
		_putchar(str[z]);
		z++;
	}
	_putchar('\n');
}
