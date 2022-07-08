#include "main.h"
#include <unistd.h>
/**
 * more_numbers - prints 10 times the numbers from 0 - 14
 */

void more_numbers(void)
{
char i;
char j;
char n;

for (i = 0; i < 10; i++)
{
for (j = 0; j < 15; j++)
{
if (j > 9)
{
_putchar(1 + '0');
_putchar((j % 10) + '0');
}
else
{
_putchar(j + '0');
}
}
n = '\n';
write(1, &n, 1);
}
}
