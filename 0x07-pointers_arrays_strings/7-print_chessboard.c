#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: an array
 * Return: 0
 */

void print_chessboard(char (*a)[8])
{
	int e, f;

	for (e = 0; e < 8; e++)
	{
		for (f = 0; f < 8; f++)
		{
			_putchar(a[e][f]);
		}
		_putchar('\n');
	}
}
