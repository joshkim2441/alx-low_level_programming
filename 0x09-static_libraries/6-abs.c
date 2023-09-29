#include "main.h"
/**
 * _abs - function computes the
 * absolute value of an integer
 * @n: int type of number
 * Return: the absolute value of @n
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
