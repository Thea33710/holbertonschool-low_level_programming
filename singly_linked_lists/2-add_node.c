#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - add a node
 * @head: the start of node
 * @str: a string
 * Return: the address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *s;
	unsigned int len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	s = strdup(str);

	if (s == NULL)
	{
		return (NULL);
	}

	while (s[len] != '\0')
	{
		len++;
	}

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(s);
		return (NULL);
	}

	new->str = s;
	new->len = len;
	new->next = *head;
	*head = new;

	return (new);
}
