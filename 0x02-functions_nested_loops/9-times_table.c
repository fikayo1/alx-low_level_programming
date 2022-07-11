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
int mul;

for (k = 0; k < 10; k++)
{
for (i = 0; i < 10; i++)
{
mul = i * k;
 if ((mul / 10) == 0)
   {
     if (i == 0)
       {
	 _putchar('0');
       }
     if (i != 0)
       {
	 _putchar(' ');
	 _putchar((mul % 10 + '0'));
       }
     if (i < 9)
       {
	 _putchar(',');
	 _putchar(' ');
	   }
   }
 else
   {
     _putchar((c / 10) + '0');
     _putchar((c % 10) + '0');
   }
if (i < 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
