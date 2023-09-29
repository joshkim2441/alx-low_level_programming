#include <stdio.h>

/**
 * main - prints number of arguments
 * passed to it
 * @argc: the number of arguments
 * @argv: the array containing arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
