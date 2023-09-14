#include "main.h"

/**
 * print_triangle - prints a triangle
 * followed by a new line
 * @size: the size of the triangle
 * @#: character to print the triangle
 * Return: Always 0
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int a, b;

		for (a = 1; a <= size; a++)
		{
			for (b = 1; b <= size - a; b++)

				_putchar(' ');

			for (b = 1; b <= a; b++)

				_putchar('#');

			_putchar('\n');
		}
	}
}
