#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of char and initializeswith a specific char
 * @size: number of element in the array
 * @c: a character
 * Return: Null if size is 0, a pointer to th array
 */
char *create_array(unsigned int size, char c)
{
unsigned int i = 0;
char *ar;

if (size == 0)
{
return (NULL);
}
ar = malloc(size * sizeof(c));
if (ar == NULL)
{
return (NULL);
}
while (i < size)
{
ar[i] = c;
i++;
}
ar[i] = '\0';
return (ar);
}
