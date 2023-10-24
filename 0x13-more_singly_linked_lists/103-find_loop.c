#include "lists.h"

/**
 * find_listint_loop - function that finds a loop in a linked list
 * @head: the initial node
 * Return: the address of the node where loop starts,
 * NULL if there's no loop
*/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise, *hare;

	tortoise = hare = head;

	if (head == NULL)
		return (NULL);

	while (tortoise && hare && hare->next)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;

		if (tortoise == hare)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				tortoise = tortoise->next;
				hare = hare->next;
			}
			return (tortoise);
		}
	}
	return (NULL);
}
