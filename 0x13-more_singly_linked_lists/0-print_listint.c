#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * @h: constant pointer type list_t
 *
 * Return: the numbers of nodes
 */
size_t print_list(const list_t *h)
{
	size_t num_nodes;
	const list_t *p = h;

	num_nodes = 0;
	while (p != NULL)
	{
		printf("%d\n", p->n);
		num_nodes++;
		p = p->next;
	}
	return (num_nodes);
}
