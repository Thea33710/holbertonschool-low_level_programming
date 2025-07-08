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
 * _memcpy - Function that
 *
 * @dest: string
 * @src: string
 * @n: nombre positif
 *
 * Return: Always 0 (Success)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}

/**
 * _mot - Entry point
 *
 * @str: un string
 *
 * Return: Always 0 (Success)
 */

int _mot(char *str)
{
	int i = 0, n = 0;

		if (str == NULL || str[0] == '\0')
		{
			return (0);
		}

		while (str[i])
		{
			while (str[i] == ' ' && str[i] != '\0')
			{
				i++;
			}
			if (str[i] != '\0')
			{
				n++;
				while (str[i] != ' ' && str[i] != '\0')
				{
					i++;
				}
			}
		}
		return (n);
}

/**
 * _free - Entry point
 *
 * @c: un string
 * @k: un nombre
 *
 * Return: Always 0 (Success)
 */

void _free(char **c, int k)
{
	int i;

		for (i = 0; i < k; i++)
		{
			free(c[i]);
		}
		free(c);
}

/**
 * **strtow - Entry point
 *
 * @str: un string
 *
 * Return: Always 0 (Success)
 */

char **strtow(char *str)
{
	int i = 0, k = 0, s = 0, l = 0, n;
	char **c;

		if (str == NULL || str[0] == '\0')
			return (NULL);
	n = _mot(str);
		if (n == 0)
			return (NULL);
	c = malloc((n + 1) * sizeof(char *));
		if (c == NULL)
			return (NULL);
		i = 0;
		while (str[i])
		{
			while (str[i] == ' ' && str[i] != '\0')
				i++;
			if (str[i])
			{
				s = i;
					while (str[i] != ' ' && str[i] != '\0')
					{
						i++;
					}
				l = i - s;
				c[k] = malloc(l + 1);

					if (c[k] == NULL)
					{
						_free(c, k);
						return (NULL);
					}
				_memcpy(c[k], str + s, l);
				c[k][l] = '\0';
				k++;
			}
		}
c[k] = NULL;
return (c);
}
