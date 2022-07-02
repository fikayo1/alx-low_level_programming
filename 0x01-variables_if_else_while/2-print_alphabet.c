#include <stdio.h>

/**
 * main - prints out the alphabets in lowercase
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
char alp = 'a';

while (alp < 'z')
{
printf("%c", alp);
printf("\n")
alp++;
}

putchar(alp);
return (0);
}
