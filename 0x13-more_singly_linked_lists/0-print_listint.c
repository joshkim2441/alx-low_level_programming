#include "lists.h"

/**
 * print_listint - prints all elements of linked list
 * @h: linked list of listint_t type to be printed
 *
 * Return: the number of nodes, NULL if fail
*/

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
