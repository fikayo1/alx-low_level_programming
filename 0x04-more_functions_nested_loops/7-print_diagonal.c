#include "main.h"

/**
 *print_diagonal - draws a diagonal line on the terminal
 *@n: number of times the character \ should be drawn
 */

void print_diagonal(int n)
{
int j;

if (n <= 0)
_putchar('\n');
else
{
for (j = n; j > 0; j--)
{
_putchar(' ' * j);
_putchar(92);
_putchar('\n');
}
}
}
