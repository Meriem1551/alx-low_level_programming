#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * add_nodeint - add anew node at the beginning of a list
 * @head: pointer to a pointer to a list
 * @n: data to add
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = (listint_t *)malloc(sizeof(listint_t));

	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (*head);
}

