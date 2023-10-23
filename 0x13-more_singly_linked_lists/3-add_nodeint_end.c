#include "lists.h"

/**
 * add_nodeint_end - function to add nnode at end of the linked list
 * @head: a pointer to first element of list
 * @n: the data inserted in new element
 * Return: pointer to new node, NULL if fail
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *tmp = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head == new_node;
		return (new_node);
	}

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = new_node;

	return (new_node);
}
