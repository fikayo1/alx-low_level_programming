#include "list.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint - prints all the elements in h
 * @h: a linked list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t count = 0;

while (h)
{
printf("%d\n", h->n);
count++;
}
return (count);
}
