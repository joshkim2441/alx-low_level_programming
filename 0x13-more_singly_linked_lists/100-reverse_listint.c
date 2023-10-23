#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: a pointer to the linked list
 * Return: a pointer to the reversed list
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *current = *head;

	while (current != NULL)
	{
		listint_t *next = current->next;

		current->next = previous;
		previous = current;
		current = next;
	}

	*head = previous;
	return (previous);
}
