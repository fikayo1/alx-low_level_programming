#include <stdio.h>

/**
 * main - single digit
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
int a = 0;
char alp = 'a';

while (a < 10)
{
putchar(a + '0');
a++;
}
while (alp <= 'f')
{
putchar(alp + '0');
alp++;
}
putchar('\n');
return (0);
}
