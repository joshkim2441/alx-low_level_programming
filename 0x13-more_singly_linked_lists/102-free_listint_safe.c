#include "lists.h"

/**
 * free_listint_safe - function that frees a listint_t list
 * @h: a pointer to the list
 * Return: the size of the free'd list
*/

size_t free_listint_safe(listint_t **h)
{
	int d;
	size_t count = 0;
	listint_t *current;

	while (*h != NULL)
	{
		d = *h - (*h)->next;
		if (d > 0)
		{
			current = (*h)->next;
			free(*h);
			*h = current;
			count++;
		}
		else
		{
			free(*h);
			*h = NULL;
			count++;
			break;
		}
	}
	if (h != NULL || *h != NULL)
		return (0);
		
	*h = NULL;

	return (count);
}