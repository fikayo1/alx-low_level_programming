#include <stdio.h>

/**
 * main - prints out the alphabets in lowercase
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
char alp = 'z';

while (alp >= 'a')
{
putchar(alp);
alp--;
}

putchar('\n');
return (0);
}

