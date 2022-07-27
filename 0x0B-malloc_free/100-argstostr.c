#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatinates all the argumnts
 * @ac: the number of arguments passed
 * @av: a pointer to each of the arguments
 * Return: a pointer to new string
 */
char *argstostr(int ac, char **av)
{
char *news;
int c, i, j, ia;

if (ac == 0 ||av == NULL)
{
return (NULL);
}
for (c = i = 0; i < ac; i++)
{
if (av[i] == NULL)
{
return (NULL);
}
for (j = 0; av[i][j] != '\0'; j++)
{
c++;
}
c++;
}
news = malloc((c + 1) * (sizeof(char)));
if (news == NULL)
{
free(news);
return (NULL);
}
for (i = j = ia = 0; ia < c; j++, ia++)
{
if (av[i][j] == '\0')
{
news[ia] = '\n';
i++;
ia++;
j = 0;
}
if (ia < c - 1)
news[ia] = av[i][j];
}
news[ia] = '\0';
return (news);
}
