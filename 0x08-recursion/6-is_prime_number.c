#include "main.h"

/**
 * is_prime_number - returns 1 if input
 * integer is a prime number
 * @n: input integer
 * Return: 1 on success otherwise 0
 */

int is_prime_number(int n)
{
	int i;

	if (n <= 1)
		return (0);
	for (i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}
	return (1);
}
