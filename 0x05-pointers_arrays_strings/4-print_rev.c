#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: a pointer to a string
 */
void print_rev(char *s)
{
int i;
int sizearr;

sizearr = sizeof(s) / sizeof(s[0]);
for (i = sizearr; i > 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
