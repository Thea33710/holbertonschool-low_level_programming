#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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

#include "main.h"

/**
 * *_strncat - Entry point
 *
 * Description: copy un string par un pointeur
 * @dest: un string
 * @src: un string
 * @n: nombre
 *
 * Return: Always 0 (Success)
 */


char *_strncat(char *dest, char *src, int n)
{
	int i, c;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (c = 0; src[c] != '\0' && n > 0; c++, n--)
	{
		dest[i] = src[c];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}

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
 * *string_nconcat - Entry point
 *
 * @s1: string
 * @s2: string
 * @n: un nombre positif
 *
 * Return: Always 0 (Success)
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *copie;
	int taille;

		if (s2 == NULL)
		{
			s2 = "";
		}

		if (s1 == NULL)
		{
			s1 = "";
		}

	taille = _strlen(s1) + n + 1;
	copie = malloc(sizeof(char) * taille);

		if (copie == NULL)
		{
			return (NULL);
		}

	_strcpy(copie, s1);
	_strncat(copie, s2, n);

	return (copie);
}
