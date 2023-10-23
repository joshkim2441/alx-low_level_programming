#include "lists.h"

/**
 * pop_listint - function that deletes the node head of a list
 * @head: a pointer to the list's first element
 * Return: data inside the deleted element, 0 if list is empty
*/

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	if (!head || !*head)
		return (0);

	data = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (data);
}
