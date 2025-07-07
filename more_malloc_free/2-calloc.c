#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_calloc - Entry point
 *
 * @nmemb: nombre entier positif
 * @size: nombre entier positif
 *
 * Return: Always 0 (Success)
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *arr;

		if (nmemb == 0 || size == 0)
		{
			return (NULL);
		}

	arr = malloc(size * nmemb);

		if (arr == NULL)
		{
			return (NULL);
		}

		for (i = 0; i < nmemb; i++)
		{
			arr[i] = 0;
		}
	return (arr);
}
