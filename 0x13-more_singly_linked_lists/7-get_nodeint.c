#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * get_nodeint_at_index - gets the nth node of a linked list
 * @head: the head of a linked list
 * @index: index of the node starting from 0
 * Return: a struct i guess
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;

for (i = 0; i < index && head; i++)
{
head = head->next;
}
return (head);
}
