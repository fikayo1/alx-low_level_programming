#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter
 * @array: a pinter to an array
 * @size: the size of the array
 * @action: a pointer to a function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned long int i;

if (!array || !action)
{
return;
}
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
