#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_dnodeint_at_index -  returns the nth node of a dlistint_t linked list.
 * @head: pointer to a list
 * @index: the index where to return the node
 * Return: address of the indexth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *tmp;
unsigned int pos = 0;
if (head == NULL)
return (NULL);
tmp = head;
while (tmp != NULL && pos != index)
{
tmp = tmp->next;
pos++;
}
return (tmp);
}
