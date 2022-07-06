#include "main.h"
#include <ctype.h>

/**
 * _isalpha - checks for alphabetic character
 *
 * @c: a chacter
 *
 *Return: 1 if character is an alphabet and 0 if it is not
 */

int _isalpha(int c)
{
if (isalpha(c) == 0)
return (1);
else
return (0);
}
