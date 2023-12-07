#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * dlistint_len - calculates length of a list
 * @h: pointer to the first node
 * Return: length of a list
 */
size_t dlistint_len(const dlistint_t *h)
{
const dlistint_t *tmp;
size_t len = 0;
if (h == NULL)
return (0);
tmp = h;
while (tmp != NULL)
{
len++;
tmp = tmp->next;
}
return (len);
}
