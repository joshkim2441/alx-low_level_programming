#include "main.h"

/**
 * rev_string - reverse array
 * @n: integer params
 * Return: 0
 */

void rev_string(char *n)
{
	int x = 0;
	int y = 0;
	char tmp;

	while (*(n + x) != '\0')
	{
		x++;
	}
	x--;

	for (y = 0; y < x; y++, x--)
	{
		tmp = *(n + y);
		*(n + y) = *(n + x);
		*(n + x) = tmp;
	}
}

/**
 * *infinite_add - adds two numbers
 * @n1: a number
 * @n2: a number
 * @r: buffer for storing the result
 * @size_r: buffer size
 * Return: a pointer to the result
 * 0 if the result cannot be stored in r
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int overflow = 0, x = 0, y = 0, num = 0;
	int v1 = 0, v2 = 0, tmp_tot = 0;

	while (*(n1 + x) != '\0')
		x++;
	while (*(n2 + y) != '\0')
		y++;
	x--;
	y--;
	if (y >= size_r || x >= size_r)
		return (0);
	while (y >= 0 || x >= 0 || overflow == 1)
	{
		if (x < 0)
			v1 = 0;
		else
			v1 = *(n1 + x) - '0';
		if (y < 0)
			v2 = 0;
		else
			v2 = *(n2 + y) - '0';
		tmp_tot = v1 + v2 + overflow;
		if (tmp_tot >= 10)
			overflow = 1;
		else
			overflow = 0;
		if (num >= (size_r - 1))
			return (0);
		*(r + num) = (tmp_tot % 10) + '0';
		num++;
		y--;
		x--;
	}
	if (num == size_r)
		return (0);
	*(r + num) = '\0';
	rev_string(r);
	return (r);
}
