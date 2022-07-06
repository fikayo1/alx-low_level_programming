#include <ctype.h>
#include "main.h"
/**
 * _islower - check if the character is lowercase
 *
 *@c:a character
 *
 * Return: (1) if it is lowercase and (0) if it is not
 */

int _islower(int c)
{
if (islower(c) == 0)
return (0);
else
return (1);
}
