#include "lists.h"

/**
 * free_listint_safe - function that frees a listint_t list
 * @h: a pointer to the list
 * Return: the size of the free'd list
*/

size_t free_listint_safe(listint_t **h)
{
	size_t j;
	size_t count = 0;
	listint_t *current = *h;
	listint_t *seen[1024] = {NULL};
	listint_t *next = current->next;

	while (current != NULL)
	{
		for (j = 0; j < count; j++)
		{
			if (seen[j] == current)
			{
				return (count);
			}
		}
		seen[count] = current;
		count++;

		free(current);
		current = next;
	}
	*h = NULL;

	return (count);
}