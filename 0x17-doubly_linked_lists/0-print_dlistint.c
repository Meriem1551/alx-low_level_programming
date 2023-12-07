#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * print_dlistint - prints all the elements of a doubly linked list
 * @h: pointer to first node
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
const dlistint_t *tmp;
size_t num_nodes = 0;
if (h == NULL)
return (0);
tmp = h;
while (tmp != NULL)
{
printf("%d\n", tmp->n);
num_nodes++;
tmp = tmp->next;
}
return (num_nodes);
}
