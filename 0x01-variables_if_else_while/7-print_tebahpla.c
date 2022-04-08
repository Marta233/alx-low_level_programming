#include <stdio.h>

/**
 * main - entry point, prints values of different data types
 *
 * Return: Always return 0
 */
int main(void)
{
	char Letter;

	for (Letter = 'z' ; Letter >= 'a' ; Letter--)
		putchar(Letter);
	putchar('\n');
	return (0);
}
