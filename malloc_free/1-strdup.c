#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_strdup - Entry point
 *
 * @str: un string
 *
 * Return: Always 0 (Success)
 */

char *_strdup(char *str)
{
		if (str == NULL)
		{
			return (NULL);
		}
	int taille = strlen(str) + 1;
	char  *copie = malloc(taille * sizeof(char));

		if (copie == NULL)
		{
			return (NULL);
		}

	strcpy(copie, str);
	return (copie);
}
