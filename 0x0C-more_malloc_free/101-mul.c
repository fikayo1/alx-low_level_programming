#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * main - multiplies two numbers
 * @argc: the number of arguments
 * @argv: argument vector
 * Return: nothing
 */
void main(int argc, char *argv[])
{
int i, j, mul;

if (argc != 3)
{
printf("Error\n");
exit(98);
}
else
{
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
exit(98);
}
}
}
mul = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", mul);
}
}
