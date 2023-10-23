#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 * print_listint - print the content of all the nodse in a list
 * @h: pointer to the first node
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num_node = 0;
	const listint_t *ptr = h;

	while (ptr != NULL)
	{
		printf("%d", ptr->n);
		ptr = ptr->next;
		num_node++;
	}
	return (num_node);
}
