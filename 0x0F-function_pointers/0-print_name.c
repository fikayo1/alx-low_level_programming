#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: a string to be printed
 * @f: a pointer to a funtion
 */
void print_name(char *name, void (*f)(char *))
{
if (!name || !f)
{
return ;
}
f(name);
}
