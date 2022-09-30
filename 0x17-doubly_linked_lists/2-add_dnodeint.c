#include "lists.h"
/**
 * add_dnodeint - adds a new node to the beginning of a doubly linked list
 * @head: the head of thet doubly linked list
 * @n: the data of the new node
 * Return: The address of the new list or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new;
dlistint_t *h;

new = malloc(sizeof(dlistint_t));
if (new == NULL)
{
return (NULL);
}
new->n = n;
new->prev = NULL;

h = *head;
if (h != NULL)
{
while (h->prev != NULL)
{
h = h->prev;
}
}
new->next = h;

if (h != NULL)
	h->prev = new;
*head = new;

return (new);
}
