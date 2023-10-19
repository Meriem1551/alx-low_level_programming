#include "lists.h"
/**
 * list_len - return number of element in a list
 * Descripton: this func take a pointer to the first node of the list
 * and traverse it to calculate num of elements
 * @h:a pointer to the first node
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t num_nodes = 0;

	while (h != NULL)
	{
		num_nodes++;
		h = h->next;
	}
	return (num_nodes);
}
