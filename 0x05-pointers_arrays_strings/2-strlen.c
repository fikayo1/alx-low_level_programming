#include "main.h"
/**
 * _strlen - returns the lenght of a string
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
int i;

while (s[i] != '\0')
{
i++;
}
return (i);
}
