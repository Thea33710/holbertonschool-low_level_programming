#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - get the nth node
 * @head: the start of node
 * @index: the nth to get
 * Return: the nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int count = 0;

	temp = head;

	while (count != index)
	{
		if (temp == NULL)
		{
			return (NULL);
		}
		else
		{
			temp = temp->next;
			count++;
		}
	}

	return (temp);
}
