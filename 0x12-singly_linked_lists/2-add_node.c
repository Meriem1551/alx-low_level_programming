#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list
 * Description: thi function takes a pointer to the first node
 * and the string to add
 * @head:  pointer to the first node
 * @str: a pointer to the string
 * Return:  the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int str_len;

	if (str == NULL)
		return (NULL);
	new_node = (list_t *)malloc(sizeof(list_t));
	str_len = 0;
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	while (new_node->str[str_len] != '\0')
		str_len++;
	new_node->len = str_len;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
