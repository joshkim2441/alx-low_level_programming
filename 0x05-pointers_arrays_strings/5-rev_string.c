#include "main.h"

/**
 * rev_string - reverses a string
 * @s: a pointer to the string
 * eturn 0
 */

void rev_string(char *s)
{
	char temp;
	int x, len, lenx;

	len = 0;
	lenx = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	lenx = len - 1;

	for (x = 0; x < len / 2; x++)
	{
		temp = s[x];
		s[x] = s[lenx];
		s[lenx--] = temp;
	}
}
