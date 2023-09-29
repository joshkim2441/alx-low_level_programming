#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum amount of coins
 * to make change for amount of money
 * @argc: number of arguments
 * @argv: array og arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int cnts, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cnts = atoi(argv[1]);

	while (cnts > 0)
	{
		if (cnts >= 25)
			cnts -= 25;
		else if (cnts >= 10)
			cnts -= 10;
		else if (cnts >= 5)
			cnts -= 5;
		else if (cnts >= 2)
			cnts -= 2;
		else if (cnts >= 1)
			cnts -= 1;
		coins += 1;
	}
	printf("%d\n", coins);
	return (0);
}
