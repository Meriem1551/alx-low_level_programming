#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * delete_nodeint_at_index -  deletes the node at index index of a
 * listint_t linked list.
 * @head: pointer to the first node
 * @index: index of the node that should be deleted. Index starts at 0
 * Return:  1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *p, *q = NULL;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	p = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(p);
		return (1);
	}
	while (i != index && p != NULL)
	{
		q = p;
		p = p->next;
		i++;
	}
	if (p == NULL)
		return (-1);
	q->next = p->next;
	free(p);
	return (1);
}

