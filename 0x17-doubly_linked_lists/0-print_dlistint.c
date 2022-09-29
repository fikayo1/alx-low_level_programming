#include "lists.h"
/**
 * print_dlistint - prints all the element in a doubly linked list
 * @h: the head of the doubly linked list
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t n;
while (h != NULL)
{
printf(h->n);
h = h->next;
n++;
}
return (n);
}
