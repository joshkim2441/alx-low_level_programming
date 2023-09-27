#include "main.h"

/**
 * actual_sqrt - evaluates from 1 to n
 * @x: integer to be square rooted
 * @y: iterates from 1 to n
 * Return: 1 on success
 * -1 for error
 */

int actual_sqrt(int x, int y)
{
	if (y * y == x)
		return (y);
	else if (y * y > x)
		return (-1);
	return (actual_sqrt(x, y + 1));
}

/**
 * _sqrt_recursion - returns the the natural
 * square root of a number
 * @n: the number that is squared
 * Return: -1 if n has no square root
 * on success 1
 */

int _sqrt_recursion(int n)
{
	return (actual_sqrt(n, 1));
}
