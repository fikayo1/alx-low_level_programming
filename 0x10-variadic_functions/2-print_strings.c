#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print-string - prints a string followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;
char *str;

va_start(ap, n);
for (i = 0; i < n; i++)
{
str = va_arg(ap, char *);
if (str)
{
printf("%s", str);
}
else
{
printf("(nil)");
}
if (separator && i < n - 1)
{
printf("%s", separator);
}
}
printf("\n");
va_end(ap);
}
