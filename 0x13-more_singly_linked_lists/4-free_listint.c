#include "lists.h"

/**
 * free_listint - function that frees a linked list
 * @head: the freed listint_t list
*/

void free_listint(listint_t *head)
{
	listint_t *current = head;

	while (current != NULL)
	{
		listint_t *next = current->next;

		free(current);
		current = next;
	}
}
