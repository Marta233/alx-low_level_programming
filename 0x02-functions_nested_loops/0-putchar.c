#include "main.h"

/**
 * main - Prints "Programming is like building a multilingual
 *                puzzle, followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
char *c = "_putchar";
while(*c)
{
_putchar(*c);
*c++;
}
_putchar('\n');
return (0);
}
