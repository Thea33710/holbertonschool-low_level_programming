#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_grid - Entry point
 *
 * @grid: l'autre tableau
 * @height: hauteur
 *
 * Return: Always 0 (Success)
 */

void free_grid(int **grid, int height)
{
	int i;

		if (grid == NULL)
		{
			return;
		}

		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
	free(grid);
}
