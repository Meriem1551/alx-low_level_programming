#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointe to the first node
 * @index:  index of the node, starting at 0
 * Return: the nth node, NULL if the node doesn't existe
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *p;
	unsigned int i = 0;
	if (head == NULL)
		return (NULL);
	p = head;
	while(p != NULL)
	{
		if (index == i)
			return (p);
		i++;
		p = p->next;
	}
	return (NULL);
}
