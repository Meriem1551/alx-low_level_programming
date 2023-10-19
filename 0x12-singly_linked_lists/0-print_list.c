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
	const list_t *p = h;
	size_t num_nodes = 0;

	if (p == NULL)
	{
		printf("Empty list");
		return (0);
	}
	while (p != NULL)
	{
		if (p->str == NULL)
		{
			printf("[0] (nil)");
		}
		else
		{
			printf("[%d] %s\n", p->len,  p->str);
		}
		num_nodes++;
		p = p->next;
	}
	return (num_nodes);
}
