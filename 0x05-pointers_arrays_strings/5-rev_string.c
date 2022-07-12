#include "main.h"
/**
 * rev_string - reverses a string
 * @s: a string to be reversed
 */
void rev_string(char *s)
{
int i;
int a = 0;
char arr[];

while (s[a] != '\0')
{
a++;
}
a -= 1;
for (i = a; i >= 0; i--)
{
arr[i - (i - 1)] = s[i];
}

*s = arr;
}

