#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 - 14
 */

void more_numbers(void)
{
int i;
int j;

for (i = 0; i < 11; i++)
{
for (j = 0; j < 15; j++)
{
_putchar(j + '0');
}
if (i < 10)
_putchar('\n');
}
}
