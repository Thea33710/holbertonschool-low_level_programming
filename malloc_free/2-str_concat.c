#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *str_concat - Entry point
 *
 * @s1: un string
 * @s2: un string
 *
 * Return: Always 0 (Success)
 */

char *str_concat(char *s1, char *s2)
{
	int taille;
	char *copie;

		if (s2 == NULL)
		{
			s2 = "";
		}

		if (s1 == NULL)
		{
			s1 = "";
		}

	taille = strlen(s1) + strlen(s2) + 1;
	copie = malloc(sizeof(char) * taille);

		if (copie == NULL)
		{
			return (NULL);
		}

	strcpy(copie, s1);
	strcat(copie, s2);

	return (copie);
}
