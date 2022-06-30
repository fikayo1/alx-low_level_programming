#include <stdio.h>
#include <string.h>

/**
 *main - print another string
 *
 *Return: Always 0 (success)
 */

int main(void)
{
char str[200];

strcpy(str, "with proper grammar, but the outcome is a piece of art,");
printf("%s\n", str);
return (0);
}
