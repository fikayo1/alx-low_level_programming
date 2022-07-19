#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: a pointer to the string
 * @n: a character to be checked for
 * Return: a pointer to the first occurrence of the c in the s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s)
}
++s;
}
if (*s == c)
{
return (s);
}
return (0);
}
