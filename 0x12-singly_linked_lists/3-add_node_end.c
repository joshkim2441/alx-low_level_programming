#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node to the end of a list
 * @head: a double-pinter to the new node
 * @str: the string to be duplicated
 * Return: the address of the new element, NULL on fail
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp = *head;
	list_t *new_node = malloc(sizeof(list_t));
	unsigned int len = 0;

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	while (str[len])
		len++;
	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new_node;

	return (new_node);
}
