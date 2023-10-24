#include "lists.h"

/**
 * free_listint_safe - function that frees a listint_t list
 * @h: a pointer to the list
 * Return: the size of the free'd list
*/

size_t free_listint_safe(listint_t **h)
{
	size_t counter = 0;
	listint_t *temp;
	listint_t *nodes = NULL;

	if (!h)
		return (0);

	while (!is_in_nodes(nodes, *h))
	{
		if (!add_nodeptr(&nodes, *h))
		{
			free_listnode(nodes);
			exit(98);
		}
		temp = *h;
		*h = (*h)->next;
		free(temp);
		counter++;
	}
	if (*h)
		*h = NULL;

		free_listnode(nodes);

		return (counter);
}
