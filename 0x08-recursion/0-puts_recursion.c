#include "main.h"
/**
 * _puts_recursion - prints a string
 * @s: a pointer to the string to be printed
 */
void _puts_recursion(char *s)
{
if (*s)
{
_puts_recursion(s + 1);
_putchar(*s);
}
}
