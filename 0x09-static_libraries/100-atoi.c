#include "main.h"

/**
 * _atoi - function to convert a string to an integer.
 * @s: the input string.
 * Return: an integer.
 */
int _atoi(char *s)
{
	unsigned int count = 0, size = 0, ab = 0, ps = 1, m = 1, i;

	while (*(s + count) != '\0')
	{
		if (size > 0 && (*(s + count) < '0' || *(s + count) > '9'))
			break;
		if (*(s + count) == '-')
			ps *= -1;

		if ((*(s + count) >= '0') && (*(s + count) <= '9'))
		{
			if (size > 0)
				m *= 10;
			size++;
		}
		count++;
	}

	for (i = count - size; i < count; i++)
	{
		ab = ab + ((*(s + i) - 48) * m);
		m /= 10;
	}
	return (ab * ps);
}
