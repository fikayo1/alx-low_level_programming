#include <stdio.h>

/**
 * main - prints the sum of all the multiples of 3 and five in 1024
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
int i;
int sum;

for (i = 0; i < 1024; i++)
{
if (i % 3 == 0 || i % 5 == 0)
{
sum += i;
}
}
printf("%d", sum);
printf("\n")
return (0);
}
