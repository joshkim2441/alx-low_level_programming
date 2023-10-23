#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the node at
 * specific index in a linked list
 * @head: the leading node in the list
 * @index: the returned index node
 *
 * Return: a pointer to the node searched for, otherwise NULL
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;
	listint_t *current = head;

	while (current != NULL && j < index)
	{
		current = current->next;
		j++;
	}
	return (current ? current : NULL);
}
