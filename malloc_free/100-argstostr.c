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
 * _taille - Entry point
 *
 * @ac: entier
 * @av: un string
 *
 * Return: Always 0 (Success)
 */

int _taille(int ac, char **av)
{
int taille = 0;
int i;
for (i = 0; i < ac; i++)
{
taille += _strlen(av[i]) + 1;
}
return (taille + 1);
}

/**
 * *argstostr - Entry point
 *
 * @ac: entier
 * @av: un string
 *
 * Return: Always 0 (Success)
 */

char *argstostr(int ac, char **av)
{
	char *ptr;
	int i;
	int taille = _taille(ac, av);

		if (ac == 0 || av == NULL)
		{
			return (NULL);
		}
	ptr = malloc(sizeof(char) * taille);

		if (ptr == NULL)
		{
			return (NULL);
		}

	ptr[0] = '\0';

	for (i = 0; i < ac; i++)
	{
		_strcat(ptr, av[i]);
		_strcat(ptr, "\n");
	}

return (ptr);
}
