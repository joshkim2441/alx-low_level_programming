#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes node at specific
 * position in the linked list
 * @head: a pointer to the start element in the list
 * @index: the index of nnode to delete
 * Return: if success 1, otherwise -1
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node = NULL;
	listint_t *tmp = *head;
	unsigned int j = 0;

	if (*head == NULL)
		return (-1);


	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	while (j < index - 1)
	{
		if (!tmp || !(tmp->next))
			return (-1);
		tmp = tmp->next;
		j++;
	}

	node = tmp->next;
	tmp->next = node->next;
	free(node);

	return (1);
}
