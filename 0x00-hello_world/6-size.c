#include <stdio.h>
#include <string.h>

/**
 * main - print sizes
 * 
 *Return: Always 0 (Success)
 */

int main(void)
{
char c;
int d;
long int e;
long long int f;
float g;
printf("Size of a char: %d byte(s)\n", sizeof(c));
printf("Size of a int: %d byte(s)\n", sizeof(d));
printf("Size of a long int: %d byte(s)\n", sizeof(e));
printf("Size of a long long int: %d byte(s)\n", sizeof(f));
printf("Size of a float: %d byte(s)\n", sizeof(g));
return (0);
}
