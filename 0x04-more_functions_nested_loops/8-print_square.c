#include "main.h"

/**
 * print_square - prints a square
 *
 *@size: size of the squuare
 *
 */

void print_square(int size)
{
int i;
int j;
 if (size <= 0)
{
_putchar('\n');
}
 else
{
for (j = size; j > 0; j--)
{
for (i = size; i > 0; i--)
{
_putchar('#');
}
_putchar('\n');
}
}
}
