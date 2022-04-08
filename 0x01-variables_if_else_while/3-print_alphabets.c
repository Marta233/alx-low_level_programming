#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point, prints values of different data types
 *
 * Return: Always return 0
 */
int main(void)
{
	char Letter;

	for (Letter = 'a' ; Letter <= 'z' ; Letter++)
		putchar(Letter);
	for (Letter = 'A' ; Letter <= 'z' ; Letter++)
		putchar(Letter);
	putchar('\n');
	return (0);
}
