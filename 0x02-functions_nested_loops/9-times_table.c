#include "main.h"

/**
 *times_table - prints the 9 times tables, starting with 0
 *
 */

void times_table(void)
{
int i;
int k;

for (k = 0; k < 10; k++ )
{
for (i = 0; i < 10; i++)
{
i = i * k;
_putchar(i + '0');
if (i < 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
