#include "main.h"
/**
 * print_array - prints n elements of an array of integers
 * @a: a pointer to an array
 * @n: numbers of elements of to be printed
 */
void print_array(int *a, int n)
{
int i;

for (i = 1; i <= n; i++)
printf("%d", a[i]);
}