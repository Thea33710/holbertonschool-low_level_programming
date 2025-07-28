#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - sum datas
 * @head: the start of node
 * Return: the sum of all the data
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
