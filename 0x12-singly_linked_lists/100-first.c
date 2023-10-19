#include <stdio.h>

/**
 * premain - is executed before main the main function
 * Return: no return
 */

void __attribute__ ((constructor)) premain(void)
{
	printf("Your're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
