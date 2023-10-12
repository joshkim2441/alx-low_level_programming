#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by new line
 * @separator: string to be printed
 * @n: number of strings passed to the function
 * Return: separator
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int j;
	char *str;

	va_start(args, n);
	for (j = 0; j < n; j++)
	{
		str = va_arg(args, char*);
			printf("%s", str ? str : "(nil)");
			if (j < n - 1 && separator != NULL)
				printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
