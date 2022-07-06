#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 */

void jack_bauer(void)
{
int ht = 0;
int hu = 0;
int mt = 0;
int mu = 0;

 while (ht != 2 &&  hu >= 4 && mt != 0 && mu != 0)
   {
     if (mu > 9)
       mu = 0;
     if (hu > 9)
       hu = 0;
     if (mt > 9)
       mt = 0;
   }
 for (mu = 0; mu < 10; mu++)
  _putchar(mu + '0');
 _putchar('\n')
_putchar(ht + '0');
_putchar(hu + '0');
_putchar(':');
_putchar(mt + '0');
_putchar(mu + '0');
}
