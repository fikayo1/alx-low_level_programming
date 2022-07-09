#include "main.h"

/**
 * print_number - prints out a number
 *@n: number to be printed
 */

void print_number(int n)
{
int j, y;
 
if (n > 9)
{
while (n > 9)
{
n = n % 10;
j++;
 
}
_putchar(j);
_putchar(n + '0');
}
else if (n < 0)
{
y = n * -1;
_putchar('-');
_putchar(y + '0');
}
else
{
_putchar(n + '0');
}
}
