#include "lists.h"
/**
 * add_dnodeint_end - adds a new node to the end of a doubly linked list
 * @head: the head of a linked list
 * @n: the data of the new node
 * Return: the address of the new element or NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new, *h;

new = malloc(sizeof(dlistint_t));
if (new == NULL)
{
free(new);
return (NULL);
}

new->n = n;
new->next = NULL;

h = *head;

while (h && h != NULL)
{
h = h->next;
}

new->prev = h;
if (h)
{
h->next = new;
}
else
{
*head = new;
}
return (new);
}
