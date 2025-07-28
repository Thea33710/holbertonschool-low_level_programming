#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - delete the nth node
 * @head: the start of node
 * @index: the nth to delete
 * Return: 1 if success -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;

		free(temp);
		return (1);
	}
	while (count != index)
	{
		if (temp == NULL)
		{
			return (-1);
		}
		else
		{
			temp = temp->next;
			count++;
		}
	}
	if (temp == NULL)
		return (-1);

	if (temp->prev != NULL)
		temp->prev->next = temp->next;

	if (temp->next != NULL)
		temp->next->prev = temp->prev;

	free(temp);
	return (1);
}
