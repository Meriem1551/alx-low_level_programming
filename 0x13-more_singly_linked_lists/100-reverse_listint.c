#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: pointer to the first node
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *p, *q;

	if (head == NULL || *head == NULL)
		return (NULL);
	p = *head;
	if (p->next == NULL)
		return (*head);
	q = *head;
	*head = (*head)->next;
	reverse_listint(head);
	q->next->next = p;
	q->next = NULL;
	return (*head);
}
