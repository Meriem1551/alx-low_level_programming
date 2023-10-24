#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * sum_listint - calculates the sum of all data in a list
 * @head: pointer to the first node
 * Return: sum of all the data, 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *p;

	if (head == NULL)
		return (0);
	p = head;
	while (p != NULL)
	{
		sum += p->n;
		p = p->next;
	}
	return (sum);
}

