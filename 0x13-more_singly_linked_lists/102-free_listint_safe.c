#include "lists.h"

/**
 * free_listint_safe - function that frees a listint_t list
 * @h: a pointer to the list
 * Return: the size of the free'd list
*/

size_t free_listint_safe(listint_t **h)
{
	size_t nodes = 0;
	listint_t *slow = *h, *fast = *h, *free_ptr;

	if (h == NULL || (*h) == NULL)
		return (0);

	while (slow && fast && fast->next)
	{
		nodes++;

		if (slow == fast && nodes > 1)
		{
			nodes--;
			break;
		}
		slow = slow->next;
		fast = fast->next->next;
	}
	slow = *h;
	while (slow && slow != fast)
	{
		free_ptr = slow;
		slow = slow->next;
		free(free_ptr);
	}
	if (fast)
	{
		while (fast->next != slow)
		{
			free_ptr = fast->next;
			fast->next = fast->next->next;
			free(free_ptr);
			nodes++;
		}
		free(fast);
	}
	*h = NULL;
	return (nodes);
}
