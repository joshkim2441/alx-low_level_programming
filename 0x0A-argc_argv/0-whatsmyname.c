#include <stdio.h>
#include "main.h"

/**
 * main - prints its own name
 * @argv: array part of main function
 * @argc: the number of command line arguments.
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
