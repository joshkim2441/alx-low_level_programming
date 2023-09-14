#include "main.h"

/**
 * print_diagonal - prints a diagonal
 * line on the terminal
 * @n: number of times the character / should
 * be printed
 * Return: Always 0 (success)
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int i, j;

		for (i = 1; i <= n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
