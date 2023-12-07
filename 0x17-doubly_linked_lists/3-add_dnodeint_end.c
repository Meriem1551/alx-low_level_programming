#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: pointer to a list
 * @n: number to insert in new node
 * Return: pointer to new list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new = (dlistint_t *)malloc(sizeof(dlistint_t));
dlistint_t *tmp;
if (new == NULL)
return (NULL);
new->n = n;
new->next = NULL;
new->prev = NULL;
if (*head == NULL)
*head = new;
else
{
tmp = *head;
while (tmp->next != NULL)
tmp = tmp->next;
new->prev = tmp;
tmp->next = new;
}
return (*head);
}
