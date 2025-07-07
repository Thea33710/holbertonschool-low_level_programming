#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - Entry point
 * @size: size
 * @c: un char
 *
 * Return: Always 0 (Success)
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

		if (size == 0)
		{
		return (NULL);
		}
	arr = malloc(sizeof(char) * size);

		if (arr == 0)
		{
			return (NULL);
		}

		for (i = 0; i < size; i++)
		{
		arr[i] = c;
		}

	return (arr);
}
