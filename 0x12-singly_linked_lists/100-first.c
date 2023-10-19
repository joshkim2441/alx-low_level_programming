#include <stdio.h>

/**
 * first - is executed before main the main function
 * Return: no return
 */

void __attribute__ ((constructor)) first()
{
	printf("Your're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
