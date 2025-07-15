#include "function_pointers.h"

/**
 * array_iterator - Entry point
 * @array: tableau d'entier
 * @size: taille
 * @action: un pointeur vers une fonction
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}

}
