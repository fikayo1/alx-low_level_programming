#include "main.h"
#include <stdio.h>
/**
 * factorial - the factorial of a given number
 * @n: the number
 * Return: the factorial of the number
 */
int factorial(int n)
{
if (n < 0)
{
return (0);
}
if (n == 1 || n == 0)
{
return (1);
}
return (n * factorial(n -1));
}
