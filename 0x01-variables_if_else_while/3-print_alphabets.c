#include <stdio.h>

/**
 * main - alphabets
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
char alp = 'a', ALP = 'A';

while (alp <= 'z')
{
putchar(alp);
alp++;
}
while (ALP <= 'Z')
{
putchar(ALP);
ALP++;
}
  

putchar('\n');
return (0);
}
