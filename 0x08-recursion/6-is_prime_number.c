#include "main.h"

/**
 * prime - evaluates from 1 to n
 * @x: integer to evaluate
 * @y: iterates from 1 to n
 * Return: 1 on success -1 for error
 */

int prime(int x, int y)
{
	if (y == 1)
		return (1);
	if (x % y == 0 && y > 0)
		return (0);
	return (prime(x, y - 1));
}

/**
 * is_prime_number - returns 1 if input
 * integer is a prime number
 * @n: input integer
 * Return: 1 on success otherwise 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, n - 1));
}
