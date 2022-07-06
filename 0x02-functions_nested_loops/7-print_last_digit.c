#include "main.h"
#include <limits.h>
/**
 * print_last_digit - prints the last digit of a number
 *
 *@j: the number
 *
 *Return: the value of the last digit
 */

int print_last_digit(int j)
{
int last;
if (j == INT_MIN)
j = INT_MAX;
if (j < 0)
{
j = j + (-2 * j);
}
if (j < 10)
last = j;
else
{
while (j > 10)
{
j = j % 10;
last = j;
}
}
_putchar(last + '0');
return (last);
}
