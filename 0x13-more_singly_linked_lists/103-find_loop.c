#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * find_listint_loop - function that finds the loop in a linked list.
 * @head: pointer to the head of linked list.
 *
 * You are not allowed to use malloc, free or arrays.
 * You can only declare a maximum of two variables in your function.
 *
 * Return: The address of the node where the loop starts, or NULL if,
 * there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow_ptr = head, *fast_ptr = head;

	if (head == NULL || head->next == NULL)
		return (NULL);
	slow_ptr = slow_ptr->next;
	fast_ptr = fast_ptr->next->next;
	while (fast_ptr && fast_ptr->next)
	{
		if (slow_ptr == fast_ptr)
			break;
		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next->next;
	}
	if (slow_ptr != fast_ptr)
		return (NULL);
	slow_ptr = head;
	while (slow_ptr != fast_ptr)
	{
		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next;
	}
	return (slow_ptr);
}
