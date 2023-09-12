#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued
 * terms of the fibonacci sequence
 * Return: Always 0 (success)
 */
int main(void)
{
	int d;
	unsigned long int e, f, next, res;

	e = 1;
	f = 2;
	res = 0;

	for (d = 1; d <= 33; ++d)
	{
		if (e < 4000000 && (e % 2) == 0)
		{
			res = res + e;
		}
		next = e + f;
		e = f;
		f = next;
	}

	printf("%lu\n", res);

	return (0);
}
