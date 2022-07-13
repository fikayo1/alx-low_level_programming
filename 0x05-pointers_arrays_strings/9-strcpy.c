#include "main.h"
/**
 * *_strcpy - copies string pointed to scr
 * @src: source string
 * @dest: a pointer pointing to destination address
 * Return: the pointer to dest
 *
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;

while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';

return (dest);

}
