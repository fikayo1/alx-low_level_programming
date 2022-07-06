#include "main.h"
/**
 *times_table - prints the 9 times tables, starting with 0
 *
 */

void times_table(void)
{
int i;
for (i = 0; i < 10; i++)
{
_putchar(i + '0');
_putchar(',');
_putchar(' ');
}
}
