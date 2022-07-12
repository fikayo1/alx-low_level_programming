#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
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
for (i = 1; i <= 98; i++)
{
j = c + k;
c = k;
k = j;
printf("%d", j);
if (1 < 98)
{
printf(", ");
}
}
printf("\n");
return (0);
}
