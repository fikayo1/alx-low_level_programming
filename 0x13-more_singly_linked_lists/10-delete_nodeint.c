#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes a node at a particular index
 * @head: the head node of a linked list
 * @index: the index of the node to be deleted
 * Return: 1 if successful and -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *curr, *prev, *temp;
size_t idx = 0;

if (*head == NULL)
return (-1);
if (index == 0)
{
temp = *head;
*head = (*head)->next;
free(temp);
return (1);
}

curr = *head;
while (curr != NULL)
{
prev = curr;
curr = curr->next;
idx++;
if (idx == index)
{
break;
}
}

if (index > idx)
return (-1);

temp = curr;
prev->next = curr->next;
free(temp);

return (1);
}
