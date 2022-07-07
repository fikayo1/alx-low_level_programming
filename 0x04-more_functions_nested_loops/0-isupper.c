#include "main.h"
#include <ctype.h>

/**
 * _isupper - checks for uppercase characters
 *@c: character
 *Return: 1 if c is upper case and 0 otherwise
 */

int _isupper(int c)
{
if (isupper(c) == 0)
return (0);
else
return (1);
}
