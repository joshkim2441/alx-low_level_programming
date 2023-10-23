#include "lists.h"

/**
 * sum_listint - function that calculates sum of all data in a list
 * @head: the start node in the list
 * Return: the sum result
*/

int sum_listint(listint_t *head)
{
	listint_t *tmp = head;
	int res = 0;

	while (tmp)
	{
		res += tmp->n;
		tmp = tmp->next;
	}
	return (res);
}
