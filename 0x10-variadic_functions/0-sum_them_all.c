#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of
 * all its parameters
 * @n: number of the arguments
 * Return: the sum result
 */

int sum_them_all(const unsigned int n, ...)
{
	int res = 0;
	unsigned int x;
	va_list list;

	va_start(list, n);

	for  (x = 0; x < n; x++)
		res += va_arg(list, int);

	va_end(list);

	return (res);
}
