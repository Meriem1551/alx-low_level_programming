#include "lists.h"
/**
 * free_list -  frees a list_t list.
 * @head: pointer to the list
 * Return: void
 */
void free_list(list_t *head)
{
	if (head == NULL)
		printf("Empty list");
	else
		free(head);
}
