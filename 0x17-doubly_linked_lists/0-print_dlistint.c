#include "lists.h"
/**
 * print_dlistint - prints all the element in a doubly linked list
 * @h: the head of the doubly linked list
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t n = 0;

while (h->prev != NULL)
{
h = h->prev;
}
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
n += 1;
}
return (n);
}
