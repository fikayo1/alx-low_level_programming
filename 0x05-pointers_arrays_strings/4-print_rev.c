#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: a pointer to a string
 */
void print_rev(char *s)
{
int i;
int a = 0;

while (s[a] != '\0')
{
a++;
}
a -= 1;
for (i = a; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
