#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint - free the list
 * @head: pointer to the first node
 * Return: void
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	free_listint(head->next);
	free(head);
}
