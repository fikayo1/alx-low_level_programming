#include <stdio.h>
#include "main.h"

/**
 *times_table - prints the 9 times tables, starting with 0
 *
 */

void checker(int mul, int i, int k)
{
  if (mul < 10)
    {
      if ((i * k) == 0 && i == 0)
	{
	  _putchar(i * k + '0');
	}
      else
	{
      _putchar(' ');
      _putchar(i * k + '0');
	}
    }
  else if (mul >= 10 && mul < 20)
    {
      _putchar(1 + '0');
      _putchar((mul % 10) + '0');
    }
  else if (mul >= 20 && mul < 30)
    {
      _putchar(2 + '0');
      _putchar((mul % 20) + '0');
    }
  else if (mul >= 30 && mul < 40)
    {
      _putchar(3 + '0');
      _putchar((mul % 30) + '0');
    }
  else if (mul >= 40 && mul < 50)
    {
      _putchar(4 + '0');
      _putchar((mul % 40) + '0');
    }
  else if (mul >= 50 && mul < 60)
    {
      _putchar(5 + '0');
      _putchar((mul % 50) + '0');
    }
  else if (mul >= 60 && mul < 70)
    {
      _putchar(6 + '0');
      _putchar((mul % 60) + '0');
    }
  else if (mul >= 70 && mul < 80)
    {
      _putchar(7 + '0');
      _putchar((mul % 70) + '0');
    }
  else if (mul >= 80 && mul < 90)
    {
      _putchar(8 + '0');
      _putchar((mul % 80) + '0');
    }
}



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
checker(mul, i, k);
if (i < 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
