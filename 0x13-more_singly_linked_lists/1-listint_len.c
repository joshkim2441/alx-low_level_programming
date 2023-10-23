#include "lists.h"

/**
 * listint_len - function that returns number of
 * elements in a linked list
 * @h: listint_t type of linked list traversed
 * Return: the number of nodes
*/

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
