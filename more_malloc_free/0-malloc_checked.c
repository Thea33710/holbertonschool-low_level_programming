#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * *malloc_checked - Entry point
 *
 * @b: un nombre positif
 *
 * Return: Always 0 (Success)
 */

void *malloc_checked(unsigned int b)
{
	int *ptr = NULL;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
