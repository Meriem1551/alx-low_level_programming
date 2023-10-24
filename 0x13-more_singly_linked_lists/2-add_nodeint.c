#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * add_nodeint - add a new node at the beginning of a list
 * Description: this function takes the head of a list and adds a node at
 * the beginning of it and return the new pointre
 * @head: pointer to a pointer to a list
 * @n: data to add
 * Return: a pointer to the new list
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

