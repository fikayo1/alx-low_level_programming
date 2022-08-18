#include "main.h"
#include <stdlib.h>
/**
 * binary_to_uint - converts a binary number to int
 * @b: a pointer to a string of 0s and 1s
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int i, j = 0;

if (!b)
{
return (0);
}
for (i = 0; b[i]; i++)
{
if (b[i] < '0' || b[i] > '1')
{
return (0);
}
j = 2 * j + (b[i] - '0');
}
return (j);
}
