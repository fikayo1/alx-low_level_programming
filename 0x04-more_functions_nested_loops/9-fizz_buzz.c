#include <stdio.h>


/**
 * main - print numbers
 *Return: 0 on success
 */

int main(void)
{
int i;

for (i = 1; i < 101; i++)
{
if (i % 15 == 0)
printf("Fizz Buzz\t");
else if (i % 3 == 0)
printf("Fizz\t");
else if (i % 5 == 0)
printf("Buzz\t");
else
printf("%d\t", i);
}
printf("\n");
return (0);
}
