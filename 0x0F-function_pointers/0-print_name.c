#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: the name printed
 * @f: a pointer to printing function
 * Return: 0
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
