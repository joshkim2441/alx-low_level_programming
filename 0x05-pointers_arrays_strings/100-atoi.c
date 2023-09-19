#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: pointer to the string to be converted
 * Return: result * sign
 */

int _atoi(char *s)
{
	int c, d, e, f, len, num;

	c = 0;
	d = 0;
	e = 0;
	f = 0;
	len = 0;
	num = 0;

	while (s[len] != '\0')
		len++;

	while (c < len && f == 0)
	{
		if (s[c] == '-')
			++d;

		if (s[c] >= '0' && s[c] <= '9')
		{
			num = s[c] - '0';

			if (d % 2)
				num = -num;
			e = e * 10 + num;
			f = 1;

			if (s[c + 1] < '0' || s[c + 1] > '9')
				break;

			f = 0;
		}
		c++;
	}
	if (f == 0)
		return (0);

	return (e);
}

