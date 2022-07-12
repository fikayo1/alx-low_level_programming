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

printf("%ld, ", c);
printf("%ld, ", k);
for (i = 1; i <= 48; i++)
{
j = c + k;
c = k;
k = j;
printf("%ld, ", j);
}
printf("\n");
return (0);
}
