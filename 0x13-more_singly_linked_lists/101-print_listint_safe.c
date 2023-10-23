#include "lists.h"

/**
 * print_listint_safe - a function that prints a linked listint_t list
 * @head: a pointer to the listint_t list
 * Return: the  number of nodes in the list, exit 98 status on fail
*/

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	const listint_t *slow_ptr, *fast_ptr;

	if (head == NULL)
		exit(98);

	slow_ptr = head;
	fast_ptr = head;

	while (slow_ptr && fast_ptr && fast_ptr->next)
	{
		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next->next;

		if (slow_ptr == fast_ptr)
		{
			printf("Loop detected at node %d\n", slow_ptr->n);
			return nodes;
		}
	}

	while (head != NULL)
	{
		printf("%d\n", head->n);
		nodes++;
		head = head->next;
	}

	return nodes;
}
