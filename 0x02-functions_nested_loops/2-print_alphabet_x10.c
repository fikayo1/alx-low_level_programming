#include "main.h"
/**
 * print_alphabet_x10 - print the alphabets in lowercase 10 times
 *
 */
void print_alphabet_x10(void)
{
int i = 0;
while (i < 10)
{
int num;
for (num = 97; num < 123; num++)
{
_putchar(num);
}
_putchar('\n');
i++;
}
}
