#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - prints numbers followed
 * by a new line
 * @separator: string printed between numbers
 * @n: number of integers passed to the function
 * Return: separator
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int y;

	va_start(args, n);
	for (y = 0; y < n; y++)
	{
		printf("%d", va_arg(args, int));
		if (y < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
