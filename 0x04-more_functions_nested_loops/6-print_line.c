#include "main.h"

/**
 * print_line - prints a line accross
 * the terminal
 * @n: number of times the character _ should be printed
 * Return: Always 0 (success)
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
