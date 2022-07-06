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

for (ht = 0; ht < 10; ht++)
{
for (hu = 0; hu < 10; hu++)
{
for (mt = 0; mt < 10; mt++)
{
for (mu = 0; mu < 10; mu++)
{
_putchar(ht + '0');
_putchar(hu + '0');
_putchar(':');
_putchar(mt + '0');
_putchar(mu + '0');
_putchar('\n');
}
}
}
}
}
