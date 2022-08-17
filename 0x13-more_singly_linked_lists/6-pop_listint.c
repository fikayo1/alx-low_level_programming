#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * pop_listint - deletes the head node of a linked list
 * @head: the first node of a linked list
 * Return: the head node data
 */
int pop_listint(listint_t **head)
{
int h;
listint_t *temp;
listint_t *curr;
if (*head == NULL)
{
return (0);
}
curr = *head;
h = curr->n;
temp = curr->next;

free(curr);
*head = temp;
return (h);
}
