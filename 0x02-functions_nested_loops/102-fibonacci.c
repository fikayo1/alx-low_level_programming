#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 *Return: 0 Always (Success)
 */

int main(void)
{
int i;
unsigned long int c = 1;
unsigned long int k = 2;
unsigned long int j;

printf("%d, ", c);
printf("%d, ", k);
for (i = 1; i <= 50; i++)
{
j = c + k;
c = k;
k = j;
printf("%llu, ", j);
}
printf("\n");
return (0);
}
