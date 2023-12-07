#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t linked list.
 * @head: pointer to a list
 * Return: sum of all data
 */
int sum_dlistint(dlistint_t *head)
{
dlistint_t *tmp;
int sum = 0;
if (head == NULL)
return (0);
tmp = head;
while (tmp != NULL)
{
sum += tmp->n;
tmp = tmp->next;
}
return (sum);
}
