#include "main.h"

/**
 * _isalpha - checks for alphabet character
 * @c: the character to check for
 * Return: 1 if c is an alphabet, 0 if otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
