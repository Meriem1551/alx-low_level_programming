#include "lists.h"
/**
 * add_node_end - add node at the end of a list 
 * Description: Takes a pointer to the list and a pointer to the string and
 * add a node at the end of this list
 * @head: pointer to the list
 * @str: pointer to a string
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *pre_node;
	int str_len = 0;
	new_node = (list_t *)malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	if (new_node->str == NULL || str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	while (new_node->str[str_len] != '\0')
		str_len++;
	new_node->next = NULL;
	new_node->len = str_len;
	if ((*head) == NULL)
	{
		*head = new_node;
		return (*head);
	}
	pre_node = *head;
	while (pre_node->next != NULL)
		pre_node = pre_node->next;
	pre_node->next = new_node;
	return (*head);
}

