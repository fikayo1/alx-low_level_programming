#include "main.h"
/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: the number to get the square root of
 * Return: the natural square troot of n 
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
return (n ** 0.5);
}
