#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: the character to check for
 * Return: 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
