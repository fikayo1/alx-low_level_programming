#include <stdio.h>

/**
 * main - single digit
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
  int a = 0, first;
while (a < 100)
{
if (a > 10)
first = a / 10;
if (first != a % 10)
{
putchar(a + '0');
putchar(',');
putchar(' ');
}
a++;
}
putchar('\n');
return (0);
}
