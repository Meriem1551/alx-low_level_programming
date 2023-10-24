#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints all the elements of a listint_t list
 * @h: constant pointer type listint_t
 *
 * Return: the numbers of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num_nodes;
	const listint_t *p = h;

	num_nodes = 0;
	while (p != NULL)
	{
		printf("%d\n", p->n);
		num_nodes++;
		p = p->next;
	}
	return (num_nodes);
}
