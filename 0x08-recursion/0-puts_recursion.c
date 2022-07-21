#include "main.h"
/**
 * _puts_recursion - prints a string 
 * @s: the memory locatio contain to be printed
 */
void _puts_recursion(char *s)
{
if (*s != '\0')
{
_putchar(*s);
return;
}
_putchar(*s);
_putchar(s + 1);
}
