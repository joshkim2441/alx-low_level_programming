#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of arguments passed to the function
 * Return: printed arguments
 */

void print_all(const char * const format, ...)
{
	int x = 0;
	char *s, *sepr = "";
	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
				case 'c':
					printf("%s%c", sepr, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", sepr, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", sepr, va_arg(list, double));
					break;
				case 's':
					s = va_arg(list, char *);
					if (!s)
						s = "(nil)";
					printf("%s%s", sepr, s);
					break;
				default:
					x++;
					continue;
			}
			sepr = ", ";
			x++;
		}

	}
	printf("\n");
	va_end(list);
}
