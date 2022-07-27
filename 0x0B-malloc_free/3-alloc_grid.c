#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimentional array of int
 * @width: the width of the arrya
 * @height: the height of the arrya
 * Return: a pointer to the array
 */
int **alloc_grid(int width, int height)
{
int *arr;

if (width < 1 || height < 1)
{
return (NULL);
}
arr = malloc(height * (sizeof(int)));
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
arr[j] = 0;
}
}
return (arr);
}
