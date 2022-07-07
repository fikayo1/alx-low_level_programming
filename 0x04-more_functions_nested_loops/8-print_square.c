#include "main.h"

/**
 * print_square - prints a square
 *
 *@size: size of the square
 *@i: size for lenght
 *@j: size for width
 */

void print_square(int size)
{
int i;
int j;

for (j = size; j > 0; j--)
{
for (i = size; i > 0; i--)
{
_putchar('#');
}
_putchar('\n');
}
}
