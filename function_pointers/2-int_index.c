#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - Entry point
 * @array: tableau d'entier
 * @size: taille
 * @cmp: un pointeur vers une fonction
 *
 * Return: Always 0 (Success)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j;

	if (array == NULL || cmp == NULL)
	{
		return;
	}

	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		j = cmp(array[i]);

		if (j == 1)
		{
			return (i);
		}
	}

	return (-1);
}
