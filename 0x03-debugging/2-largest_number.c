#include "main.h"

/**
 * main - causes an infinite loop
 * Return: 0
 */

int largest_number(int a, int b, int c)
{int largest;

if (a > b && a > c)
{
largest = a;
}
else if (b > c)
{
largest = b;
}
else
{
largest = c;
}

return (largest);
}
