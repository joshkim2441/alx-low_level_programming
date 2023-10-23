#include "lists.h"

/**
 * free_listint2 - function that frees the linked list
 * @head: a pointer to the list freed
*/

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		current = (*head)->next;

		free(*head);
		*head = current;
	}

	*head = NULL;
}
