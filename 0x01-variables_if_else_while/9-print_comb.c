#include <stdio.h>

/**
 * main - single digit
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
int a = 0;

while (a < 10)
{
putchar(a + '0');
a++;
if (a < 9)
putchar(',');
putchar(' ');
}

putchar('\n');
return (0);
}
