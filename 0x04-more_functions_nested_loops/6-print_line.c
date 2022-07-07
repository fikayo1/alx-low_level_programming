#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 *@n: number of times _ should be printed
 */

void print_line(int n)
{
int j;

if (n <= 0)
_putchar('\n');
else
{
for (j = n; j > 0; j--)
{
_putchar('_');
}
_putchar('\n');
}
}
