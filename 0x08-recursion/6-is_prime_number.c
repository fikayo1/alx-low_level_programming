#include "main.h"
/**
 * evaluate - evates the num
 * @i: the iterator
 * @n: number
 * Return: 1 or 0
 */
int evaluate(int n, int i)
{
if (i == n - 1)
{
return (1);
}
else if (n % i == 0)
{
return (0);
}
if (n % i != 0)
{
return (evaluate(n, i));
}
return (0);
}
/**
 * is_prime_number - checks for prime number
 * @n: the integer to be checked
 * Return: 1 if n is prime and 0 if not
 */
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
if (n == 2)
{
return (1);
}
return (evaluate(num, iterator));
}
