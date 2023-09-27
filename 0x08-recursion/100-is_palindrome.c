#include "main.h"

int pal_chk(char *s, int j, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks if string is
 * a palindrome
 * @s: string to be checked
 * Return: 1 if string is a palindrome
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (pal_chk(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the string length
 * @s: the string to find its length
 * Return: the string length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * pal_chk - recursively checks for a palindrome
 * @s: string that is checked
 * @j: enables iteration
 * @len: string length
 * Return: 1 for success 0 otherwise
 */

int pal_chk(char *s, int j, int len)
{
	if (*(s + j) != *(s + len - 1))
		return (0);
	if (j >= len)
		return (1);
	return (pal_chk(s, j + 1, len - 1));
}
