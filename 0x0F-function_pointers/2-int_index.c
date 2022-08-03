#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: an array containing element
 * @size: the size of the array
 * @cmp: a pointer to the a function
 * Return: index of the first element of which
 * the cmp function does not return 0, or -1 if no match is found
 */
int int_index(int *array, int size, int(*cmp)(int))
{
int i;

if (array && cmp)
{
for (i = 0; i < size; i++)
{
if (cmp[array[i]] != 0)
{
return (i);
}
}
}
return (-1);
}
