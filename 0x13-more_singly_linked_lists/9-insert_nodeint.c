#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: the head of the linked list
 * @idx: the index of the list where the node should be added
 * @n: the data to be added in the node
 * Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new, *curr;
unsigned int i;

new = malloc(sizeof(listint_t));
if (new == NULL)
{
return (NULL);
}
new->n = n;

curr = *head;

for (i = 0; i < idx && curr; i++)
{
curr = curr->next;
}

if (curr == NULL && idx != 0)
{
return (NULL);
}

if (idx == 0)
{
new->next = *head;
*head = new;
}

else
{
new->next = curr->next;
curr->next = new;
}

return (new);
}
