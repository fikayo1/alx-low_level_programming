#include <stdio.h>

/**
 * main - exceptions
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
char alp = 'a';

while (alp <= 'z')
{
if (alp != 'q' && alp != 'e')
putchar(alp);
alp++;
}
putchar('\n')
return (0);
}
