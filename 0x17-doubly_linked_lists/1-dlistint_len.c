#include "lists.h"
/**
 * dlistint_len - returns the number of element in a doubly linked list
 * @h: the head of the doubly linked list
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t num = 0;

if (h == NULL)
	return (num);
while (h->prev != NULL)
{
h = h->prev;
}
while (h != NULL)
{
h = h->next;
num += 1;
}
return (num);
}
