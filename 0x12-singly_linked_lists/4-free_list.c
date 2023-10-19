#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees list
 * @head: a pointer to the next node
 * Return: 0
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
