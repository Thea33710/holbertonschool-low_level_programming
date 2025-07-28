#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - free the list
 * @head: the start of node
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
