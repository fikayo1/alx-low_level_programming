#include "main.h"
/**
 *times_table - prints the 9 times tables, starting with 0
 *
 */

void times_table(void)
{
int i;
int j = 0;
while (j < 10)
{
for (i = 0; i < 10; i++)
{
_putchar(i + '0');
if (i < 9)
{
_putchar(',');
_putchar(' ');
}
_putchar('\n');
}
}
j++;
}
