#include <stdlib.h>
#include "lists.h"

/**
 * list_len - leng of the list
 * @h: a const list
 * Return: leng of list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
