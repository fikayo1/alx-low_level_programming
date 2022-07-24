#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds two positive numners
 * @argc: the numbers of arguments
 * @argv: the argument vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
int i, sum;

if (argc < 2)
{
printf("0\n");
}
else
{
for (i = 1; i < argc; i++)
{
if (atoi(argv[i]) < 0)
{
printf("Error\n");
return (1);
}
else
{
sum += atoi(argv[i]);
}
}
printf("%d", sum);
return (0);
}
}
