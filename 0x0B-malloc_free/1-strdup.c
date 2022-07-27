#include "main.h"
#include <stdlib.h>
/**
 * _strdup - copies a string to another memory location
 * @str: string to be copied
 * Return: a pointer to thet new string, null if string is null
 */
char *_strdup(char *str)
{
char *ns;
int i = 0;
int j;

if (str == NULL)
{
return (NULL);
}
while (str[i] != '\0')
{
i++;
}
ns = malloc(i * (sizeof(char)) + 1);
if (ns == NULL)
return (NULL);
for (j = 0; j < i; j++)
{
ns[j] = str[j];
}
ns[j] = '\0';
return (ns);
}
