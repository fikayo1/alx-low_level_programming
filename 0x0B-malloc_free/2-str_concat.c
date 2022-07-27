#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatinates two strings
 * @s1: a pointer to the first string
 * @s2: a pointer to the second string
 * Return: a pointer to the newly allocated spaace int the memory
 */
char *str_concat(char *s1, char *s2)
{
int i, j, a, b, limit;
char *news;

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
for (i = 0; s1[i] != '\0'; i++)
;
for (j = 0; s2[j] != '\0'; j++)
;
limit = i + j;
news = malloc(limit * (sizeof(char)) + 1);
if (news == NULL)
{
return (NULL);
}
for (a = 0; a < i; a++)
{
news[a] = s1[a];
}
for (b = 0; b < j; b++, a++)
{
news[a] = s2[b];
}
return (news);
}
