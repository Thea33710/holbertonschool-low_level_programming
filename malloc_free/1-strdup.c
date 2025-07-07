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
	int taille;
	char  *copie;

		if (str == NULL)
		{
			return (NULL);
		}

	taille = strlen(str) + 1;
	copie = malloc(taille * sizeof(char));

		if (copie == NULL)
		{
			return (NULL);
		}

	strcpy(copie, str);
	return (copie);
}
