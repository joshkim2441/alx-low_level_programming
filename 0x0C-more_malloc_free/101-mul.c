#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * is_digit - checks if the characters are digits
 * @s: the string to be checked
 * Return: 0 if not digit, 1 otherwise
 */

int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - it returns the string length
 * @s: the evaluated string
 * Return: the string length
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * errors - deals with errors occurring in main
 */

void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive digits
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int num1, num2, x, *prod, carry, len1, len2, len, k = 0;
	char *s1, *s2;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len = len1 + len2 + 1;
	prod = malloc(sizeof(int) * len);
	if (!prod)
		return (1);
	for (x = 0; x <= len1 + len2; x++)
		prod[x] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		num1 = s1[len1] - '0';
		carry = 0;
		for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
		{
			num2 = s2[len2] - '0';
			carry += prod[len1 + len2 + 1] + (num1 * num2);
			prod[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			prod[len1 + len2 + 1] += carry;
	}
	for (x = 0; x < len - 1; x++)
	{
		if (prod[x])
			k = 1;
		if (k)
			_putchar(prod[x] + '0');
	}
	if (!k)
		_putchar('0');
	_putchar('\n');
	free(prod);
	return (0);
}
