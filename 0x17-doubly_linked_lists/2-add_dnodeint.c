#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @h: pointer to pointer to list
 * @n: number to insert in new node
 * Return: pointer to new list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new = (dlistint_t *)malloc(sizeof(dlistint_t));
if (new == NULL)
	return (NULL);
new->n = n;
new->next = NULL;
new->prev = NULL;
if (*head == NULL)
*head = new;
else
{
new->next = *head;
(*head)->prev = new;
(*head) = new;
}
return (*head);
}
