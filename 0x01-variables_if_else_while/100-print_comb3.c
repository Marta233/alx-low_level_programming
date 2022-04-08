#include <stdio.h>

/**
 * main - entry point, prints values of different data types
 *
 * Return: Always return 0
 */
int main(void)
{
	int n1, n2;

	for (n1 = 0 ; n1 < 7 ; n1++)
	{
		for (n2 = n1 + 1 ; n2 < 9 ; n2++)
		{
			putchar((n1 % 10) + '0');
			putchar((n2 % 10) + '0');
			if (n == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	putchar("\n");
	}
	return (0);
}
