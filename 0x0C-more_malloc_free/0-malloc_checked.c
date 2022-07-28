#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: an integer
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
int *ar;

ar = malloc(b);
if (ar == NULL)
{
free(ar);
return (98);
}
return (ar);
}
