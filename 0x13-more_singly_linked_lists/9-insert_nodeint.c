#include "lists.h"

/**
 * insert_nodeint_at_index - function inserts a new node in a
 * specific position in the list
 * @head: a pointer to the start node of the list
 * @idx: the index at which new node is inserted
 * @n: the new node's inserted data
 * Return: pointer to new node
*/

listint_t *insert_node_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp = *head;
	unsigned int j;
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !head)
		return (NULL);

	new_node->n = n;
	new_node->next = (NULL);

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (j = 0; tmp && j < idx; j++)
	{
		if (j == idx - 1)
		{
			new_node->next = tmp->next;
			tmp->next = new_node;
			return (new_node);
		}
		else
			tmp = tmp->next;
	}
	return (NULL);
}
