#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
int *ar, j, num;

if (min > max)
{
return (NULL);
}
num = max - min;
ar = malloc((num + 1) * (sizeof(int)));
if (ar == NULL)
{
return (NULL);
}
for (j = 0; min <= max; j++, min++)
{
ar[j] = min;
}
return (ar);
}
