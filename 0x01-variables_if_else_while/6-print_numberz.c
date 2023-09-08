#include <stdio.h>

/**
 * main - prints all base 10 single digits
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar("\n");
	return (0);
}
