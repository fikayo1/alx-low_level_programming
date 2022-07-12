#include "main.h"
/**
 * puts-half - prints half of string
 * @str: a pointer to the string to print half of
 */
void puts_half(char *str)
{
int i = 0;
int lenght;
int a;
int newl;

while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
lenght = i;
if (lenght % 2 == 0)
{
newl = lenght/2;
}
else
{
newl = (lenght - 1) / 2;
}
for (a = 0; a <= newl; a++)
{
_putchar(str[a]);
}
_putchar('\n');
}
