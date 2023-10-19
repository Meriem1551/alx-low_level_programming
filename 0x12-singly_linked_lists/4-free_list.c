#include "lists.h"
/**
 * free_list -  frees a list_t list.
 * @head: pointer to the list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *p;
	while (head != NULL)
	{
		p = head;
		free(p->str);
		free(p);
		head = head->next;
	}
}
