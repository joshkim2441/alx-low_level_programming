#include <stdio.h>

/**
 * main - computes and prints the sum of all multiples
 * of 3 or 5 below 1024 followed by a new line
 * Return: Always 0 (success)
 */
int main(void)
{
	unsigned long int res3, res5, res;
	int i;

	res3 = 0;
	res5 = 0;
	res = 0;

	for (i = 0; i < 1024; ++i)
	{
		if ((i % 3) == 0)
		{
			res3 = res3 + i;
		} else if ((i % 5) == 0)
		{
			res5 = res5 + i;
		}
	}
	res = res3 + res5;
	printf("%lu\n", res);
	return (0);
}
