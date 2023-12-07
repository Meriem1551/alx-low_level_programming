#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dlistint - frees a dlistint_t list.
 * @head: pointer to a list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *tmp;
if (head == NULL)
return;
tmp = head;
while (head != NULL)
{
head = head->next;
free(tmp);
tmp = head;
}
}
