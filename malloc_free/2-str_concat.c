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
 * *_strcat - Entry point
 *
 * Description: copy un string par un pointeur
 * @dest: un string
 * @src: un string
 *
 * Return: Always 0 (Success)
 */


char *_strcat(char *dest, char *src)
{
	int i, c;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (c = 0; src[c] != '\0'; c++)
	{
		dest[i] = src[c];
		i++;
	}

	dest[i] = '\0';
	return (dest);
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

	taille = _strlen(s1) + _strlen(s2) + 1;
	copie = malloc(sizeof(char) * taille);

		if (copie == NULL)
		{
			return (NULL);
		}

	_strcpy(copie, s1);
	_strcat(copie, s2);

	return (copie);
}
