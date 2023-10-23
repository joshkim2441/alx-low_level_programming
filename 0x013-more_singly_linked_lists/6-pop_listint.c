#include "lists.h"

/**
 * pop_listint - function that deletes the node head of a list
 * @head: a pointer to the list's first element
 * Return: data inside the deleted element, 0 if list is empty
*/

int pop_listint(listint_t **head)
{
	listint_t *next = (*head)->next;
	int data = (*head)->n;

	if (!head || !*head)
		return (0);

	free(*head);
	*head = next;

	return (data);
}
