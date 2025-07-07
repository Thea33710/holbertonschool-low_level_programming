#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - Entry point
 *
 * Description: return the lenght of a string
 * @c: chaine de charactere
 *
 * Return: Always 0 (Success)
 */

int _strlen(char *c)
{
int i = 0;
while (*c != '\0')
{
c++;
i++;
}
return (i);
}

/**
 * *_strcpy - Entry point
 *
 * Description: copy un string par un pointeur
 * @dest: un string
 * @src: un string
 *
 * Return: Always 0 (Success)
 */

char *_strcpy(char *dest, char *src)
{
char *d = dest;
while (*src != '\0')
{
*dest = *src;
src++;
dest++;
}
*dest = '\0';
return (d);
}

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

	taille = _strlen(str) + 1;
	copie = malloc(taille * sizeof(char));

		if (copie == NULL)
		{
			return (NULL);
		}

	_strcpy(copie, str);
	return (copie);
}
