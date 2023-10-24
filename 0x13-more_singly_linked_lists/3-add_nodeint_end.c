#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint_end - adds a node at the end of a list
 * Description: takes a pointer to a list and adds a node at the end of this
 * list
 * @head: a pointer to a pointer to a list
 * @n: data to add in the new node
 * Return: pointer to the new list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = (listint_t *)malloc(sizeof(listint_t));
	listint_t *tmp;

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if ((*head) == NULL)
		*head = new;
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = new;
	}
	return (*head);
}

