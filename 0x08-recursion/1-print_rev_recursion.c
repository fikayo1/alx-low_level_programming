#include "main.h"
/**
 * _print_rev_recursion - prints a string
 * @s: a pointer to the string to be printed
 */
void _print_rev_recursion(char *s)
{
if (*s)
{
_puts_recursion(s + 1);
_putchar(*s);
}
}
