#include "main.h"
/**
 * _strlen_recursion - get the lenght of a string
 * @s: a pointer to the string to be counted
 * Return: the lenght of the string
 */
int _strlen_recursion(char *s)
{
int i;

if (*s == '\0' )
{
return;
}
i++;
_strlen_recursion(s + 1);
return (i);
}
