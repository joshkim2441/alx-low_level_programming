#include "3-calc.h"

/**
 * main - calculates the selected operation
 * @argc: the argument count
 * @argv: the array elements
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int arga, argb, res;
	char c;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	arga = atoi(argv[1]);
	argb = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	c = *argv[2];

	if ((c == '/' || c == '%') && argb == 0)
	{
		printf("Error\n");
		exit(100);
	}

	res = func(arga, argb);

	printf("%d\n", res);

	return (0);
}
