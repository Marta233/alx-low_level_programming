#include <stdio.h>

/**
 * main - entry point, prints values of different data types
 *
 * Return: Always return 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		putchar((n % 10) + '0');
	putchar('\n');
	return (0);
}
