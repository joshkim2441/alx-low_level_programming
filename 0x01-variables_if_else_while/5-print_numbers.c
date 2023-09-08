#include <stdio.h>

/**
 * main - prints all base 10 single digits
 * starting from 0 on new line
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		printf("%d", n);
	printf("\n");
	return (0);
}
