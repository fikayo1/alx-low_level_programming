#include "main.h"
#include <ctype.h>

/**
 * _isdigit - checks for a digit
 *@c: the character to be checked
 *Return: 1 if it is a digit and 0 if not
 */

int _isdigit(int c)
{
if (isdigit(c) == 0)
return (0);
else
return (1);
}
