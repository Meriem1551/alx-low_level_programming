#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * insert_nodeint_at_index -  inserts a new node at a given position.
 * @idx: index of the list where the new node should be added. Index starts
 * at 0
 * @head: pointer to the first node
 * @n: the node's data
 * Return: Returns: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *p, *new;
	unsigned int  i = 0;

	new = (listint_t *)malloc(sizeof(listint_t));
	if (head == NULL || new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	p = *head;
	while (i != idx - 1 && p != NULL)
	{
		i++;
		p = p->next;
	}
	if (i == idx - 1 && p != NULL)
	{
		new->next = p->next;
		p->next = new;
		return (new);
	}
	return (NULL);
}
