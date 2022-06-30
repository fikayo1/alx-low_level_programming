#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - prints a string
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
char str[200];

strcpy(str, "and that piece of art is useful\" - Dora Korpar, 2015-10-19");
printf("%s\n", str);
return (1);
}
