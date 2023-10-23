#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * listint_len - calculate number of elements
 * @h: pointer to the first node
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;
	const listint_t *ptr = h;

	while (ptr != NULL)
	{
		len++;
		ptr = ptr->next;
	}
	return (len);
}
