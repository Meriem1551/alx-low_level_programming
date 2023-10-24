#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * pop_listint -  deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n)
 * @head: a pointer to the first node
 * Return: he head node’s data (n).
 * 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *p;
	int n;

	if (*head == NULL)
		return (0);
	p = *head;
	*head = (*head)->next;
	n = p->n;
	free(p);
	return  (n);
}
