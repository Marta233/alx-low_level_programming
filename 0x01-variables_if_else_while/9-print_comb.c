#include <stdio.h>

/**
 * main - entry point, prints values of different data types
 *
 * Return: Always return 0
 */
int main(void)
{
	int n;

	for (n = 0 ; n <= 9 ; n++)
	{
		putchar((n%10) + '0');
		if (num == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	 putchar('\n');
	return (0);
}
