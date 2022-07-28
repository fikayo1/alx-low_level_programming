#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: an integer
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
char *ar;

ar = malloc(b);
if (ar == NULL)
{
free(ar);
exit(98);
}
return (ar);
}
