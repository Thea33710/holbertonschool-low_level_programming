#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * **alloc_grid - Entry point
 *
 * @width: largeur
 * @height: hauteur
 *
 * Return: Always 0 (Success)
 */

int **alloc_grid(int width, int height)
{
	int i, j, **arr;

		if (width <= 0 || height <= 0)
		{
			return (NULL);
		}

	arr = malloc(sizeof(int *) * height);

		if (arr == NULL)
		{
			return (NULL);
		}

		for (i = 0; i < height; i++)
		{
			arr[i] = malloc(sizeof(int) * width);

			if (arr[i] == NULL)
			{
				for (j = 0; j < i; j++)
				{
					free(arr[j]);
				}

				free(arr);
				return (NULL);
			}

			for (j = 0; j < i; j++)
			{
				arr[i][j] = 0;
			}
		}

	return (arr);
}
