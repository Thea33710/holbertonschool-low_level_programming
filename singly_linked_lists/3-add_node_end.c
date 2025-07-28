#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - add a node at the end
 * @head: the start of node
 * @str: a string
 * Return: the address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp;
	char *s;
	unsigned int len = 0;

	if (str == NULL || head == NULL)
		return (NULL);

	s = strdup(str);

	if (s == NULL)
		return (NULL);

	while (s[len] != '\0')
		len++;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(s);
		return (NULL);
	}
	new->str = s;
	new->len = len;
	new->next = NULL;
	if (*head == NULL)
		*head = new;

	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;

		temp->next = new;
	}
	return (new);
}
