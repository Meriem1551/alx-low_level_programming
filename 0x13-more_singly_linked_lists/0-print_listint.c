#include "lists.h"
#include <stdio.h>
/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: pointer to the head of linked list
 * Return: all the elements of the list.
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *p = h;

	/* while we have a pointer to head */
	while (p != NULL)
	{
		printf("%d\n", p->n);
		p = p->next;
		count++;
	}
	return (count);
}
