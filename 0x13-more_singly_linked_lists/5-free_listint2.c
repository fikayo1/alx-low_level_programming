#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - frees a linked list
 * @head: a pointer to a pointer
 */
void free_listint2(listint_t **head)
{
listint_t *temp, *curr;

if (head)
{
curr = *head;

while ((temp = curr))
{
curr = curr->next;
free(temp);
}
*head = NULL;
}
}
