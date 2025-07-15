#include "function_pointers.h"

/**
 * int_index - Entry point
 * @array: tableau d'entier
 * @size: taille
 * @cmp: un pointeur vers une fonction
 *
 * Return: l'index du premier élément correspondant, ou -1 si aucun ou erreur
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
