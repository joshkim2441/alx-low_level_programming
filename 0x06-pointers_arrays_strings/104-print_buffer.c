#include "main.h"
#include <stdio.h>

/**
 * print_line - prints s bytes of buffer
 * @l: buffer line to be printed
 * @g: printed buffer
 * @b: bytes of buffer to be printed
 * Return: 0
 */

void print_line(char *g, int b, int l)
{
	int s, y;

	for (s = 0; s <= 9; s++)
	{
		if (s <= b)
			printf("%02x", g[l * 10 + s]);
		else
			printf("  ");
		if (s % 2)
			putchar(' ');
	}
	for (y = 0; y <= b; y++)
	{
		if (g[l * 10 + y] > 31 && g[l * 10 + y] < 127)
			putchar(g[l * 10 + y]);
		else
			putchar('.');
	}
}


/**
 * print_buffer - prints a buffer
 * @size: bytes of the buffer printed
 * @b: buffer
 * Return: 0
 */

void print_buffer(char *b, int size)
{
	int e;

	for (e = 0; e <= (size - 1) / 10 && size; e++)
	{
		printf("%08x: ", e * 10);
		if (e < size / 10)
		{
			print_line(b, 9, e);
		}
		else
		{
			print_line(b, size % 10 - 1, e);
		}
			putchar('\n');
	}
	if (size == 0)
		putchar('\n');
}
