#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_listint_safe - function that frees a listint_t list.
 * @h: pointer to pointer to the head of linked list.
 *
 * This function can free lists with a loop.
 * You should go through the list only once.
 * The function sets the head to NULL.
 *
 * Return: the size of the list that was free’d. Otherwise 0.
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *current;
	listnode_t *nodes = NULL;
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (!is_in_nodes(nodes, *h))
	{
		if (!add_nodeptr(&nodes, *h))
		{
			free_listnode(nodes);
			exit(98);
		}
		current = *h;
		*h = (*h)->next;
		free(current);
		count++;
	}
	if (*h != NULL)
		*h = NULL;
	free_listnode(nodes);
	return (count);
}
