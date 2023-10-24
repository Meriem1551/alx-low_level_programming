#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint2 - set the head to null
 * @head: a pointer to the first node
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *p;

	if (head == NULL)
		return;
	while ((*head) != NULL)
	{
		p = *head;
		*head = (*head)->next;
		free(p);
	}
}
