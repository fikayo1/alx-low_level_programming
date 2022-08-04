#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the opcodes of its main function
 * @argc: arguments counter
 * @argv: argument vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
int n1, count;

if (argc != 2)
{
printf("Error\n");
exit(1);
}
if (argv[1] < 0)
{
printf("Error\n");
exit(2);
}
n1 = atoi(argv[1]);
for (count = 0; count < n1; count++)
{
printf("%02hhx", *((char *)main + count));
if (count < n1 - 1)
{
printf(" ");
}
else
{
printf("\n");
}
}
return (0);
}
