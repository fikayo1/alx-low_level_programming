#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatinates two strings
 * @s1: a pointer to the first string
 * @s2: a pointer to the seconf string
 * @n: the number of s2 characters to be concarinated
 * Return: a ponter to the newly allocated space in the memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
  unsigned int i, j, k;
char *ar;

i = strlen(s1);
ar = malloc((i + n) * sizeof(char));
if (ar == NULL)
{
return (NULL);
}
for (j = 0; s1[j] != '\0'; j++)
{
if (s1[j] == NULL)
{
s1[j] = "";
}
ar[j] = s1[j];
}
for (k = j; k <= (i + n); k++)
{
if (s2[(k - j)] == NULL)
{
s2[(k - j)] = "";
}
ar[k] = s2[k - j];
}
ar[k] = '\0';
return (ar);
}
