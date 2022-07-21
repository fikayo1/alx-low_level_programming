#include "main.h"
/**
 * evaluate - evaluate the functio
 * @i: an integer
 * @n: an integer
 * Return: evaluate sqrt
 */
int evaluate(int i, int n)
{
if (n == 0 || n == 1)
{
return (n);
}
else if ((i * i) < n)
{
return (evaluate(i + 1, n));
}
else if (i * i == n)
{
return (i);
}
}
/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: the number to get the square root of
 * Return: the natural square troot of n
 */
int _sqrt_recursion(int n)
{
int i = 0;

if (n < 0)
{
return (-1);
}
return (evaluate(i, n));
}
