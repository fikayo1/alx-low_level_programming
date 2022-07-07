#include <stdio.h>
#include "main.h"

/**
 *times_table - prints the 9 times tables, starting with 0
 *
 */

void times_table(void)
{
int i;
int k;

for (k = 0; k < 10; k++)
{
for (i = 0; i < 10; i++)
{
printf("%d", i * k);
if (i < 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
