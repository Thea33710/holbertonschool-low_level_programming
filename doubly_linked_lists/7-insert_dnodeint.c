#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a node
 * @h: the start of node
 * @idx: the place to put the new node
 * @n: the parameter of the node
 * Return: the address of the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *new;
	unsigned int count = 0;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	temp = *h;
	while (count != (idx - 1))
	{
		if (temp == NULL)
			return (NULL);

		else
		{
			temp = temp->next;
			count++;
		}
	}
	if (temp == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = temp;
	if (temp->next == NULL)
		new->next = NULL;

	else
	{
		new->next = temp->next;
		temp->next->prev = new;
	}
	temp->next = new;
	return (new);
}
