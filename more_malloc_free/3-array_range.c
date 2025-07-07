#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *array_range - Entry point
 *
 * @min: minimum
 * @max: maximum
 *
 * Return: Always 0 (Success)
 */

int *array_range(int min, int max)
{
	int *arr;
	int i, k = 1, j = min;

		if (min > max)
		{
			return (NULL);
		}

	k = max - min + 1;
	arr = malloc(sizeof(int) * k);

		if (arr == NULL)
		{
			return (NULL);
		}

		for (i = 0; i < k; i++)
		{
			arr[i] = j;
			j++;

		}
	return (arr);
}
