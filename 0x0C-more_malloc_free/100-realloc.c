#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: is a pointer to the memory previously allocated
 * @old_size: is the size in bytes of the allocated space for ptr
 * @new_size: the new size of the new memory block
 * Return: a pointer to
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
if (new_size == old_size)
{
return (ptr);
}
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
if (ptr == NULL)
{
free(ptr);
ptr = malloc(new_size);
}
free(ptr);
ptr = malloc(new_size);
return (ptr);
}
