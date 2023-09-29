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
	int k, cents, coins, denominations[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	for (k = 0; k < 5; k++)
	{
		coins += cents / denominations[k];
		cents %= denominations[k];
	}
	printf("%d\n", coins);
	return (0);

}
