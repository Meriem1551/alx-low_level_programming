#include <stdio.h>
#include "lists.h"
/**
 * print_list - function print  all the elements of a list_t list.
 * Description: this funtion take the header of a list as a param and traverse
 * this lst to print its content
 * @h: pointer to the first node
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t num_nodes;

	num_nodes = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] (nil)\n", 0);
		}
		else
		{
			printf("[%d] %s\n", h->len,  h->str);
		}
		num_nodes++;
		h = h->next;
	}
	return (num_nodes);
}
