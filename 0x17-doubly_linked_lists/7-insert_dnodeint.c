#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_dnodeint_at_index -  inserts a new node at a given position.
 * @h: pointer to list
 * @idx: position where  to add the node
 * @n: number to add
 * Return: new node adress
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *tmp, *new;
unsigned int i = 0;
if (*h == NULL || idx == 0)
add_dnodeint(h, n);
else
{
tmp = *h;
while (tmp != NULL)
{
tmp = tmp->next;
i++;
}
if (idx > i)
return (NULL);
if (idx == i)
add_dnodeint_end(h, n);
else
{
new = (dlistint_t *)malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->next = NULL;
new->prev = NULL;
tmp = *h;
i = 0;
while (tmp != NULL && i != idx - 1)
{
tmp = tmp->next;
i++;
}
new->next = tmp->next;
tmp->next->prev = new;
tmp->next = new;
new->prev = tmp;
}
}
return (new);
}
