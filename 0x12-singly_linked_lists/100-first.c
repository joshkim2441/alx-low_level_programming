#include <stdio.h>

void premain(void) __attribute__((constructor));

/**
 * premain - is executed before main the main function
 */

void premain(void)
{
	printf("Your're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
