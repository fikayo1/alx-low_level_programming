#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 *Return: 0 Always (Success)
 */

int main(void)
{
int i ;
int c = 1;
int k = 2;
int j;

printf("%d, ", c);
printf("%d, ", k);
for (i = 1; i <= 50; i++)
{
j = c + k;
c = k;
k = j;
printf("%d, ", j);
}
printf("\n");
return (0);
}
