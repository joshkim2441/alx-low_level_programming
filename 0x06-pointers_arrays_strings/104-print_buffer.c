#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * print_buffer - prints a buffer
 * @size: bytes of the buffer printed
 * @b: buffer
 * Return: 0
 */

void print_buffer(char *b, int size)
{
	int e, f;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	for (e = 0; e < size; e += 10)
	{
		printf("%08x: ", e);

		for (f = 0; f < 10; f++)
		{
			if (e + f < size)
				printf("%02x", b[e + f]);
			else
				printf(" ");
			if (f % 2)
				printf(" ");
		}

		for (f = 0; f < 10; f++)
		{
			if (e + f < size)
			{
				if (b[e + f] < 32 || b[e + f] > 126)
						printf(".");
				else
					printf("%c", b[e + f]);
			}
		}
		printf("\n");
	}
}
