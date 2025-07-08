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
 * **strtow - Entry point
 *
 * @str: un string
 *
 * Return: Always 0 (Success)
 */

char **strtow(char *str)
{
	int i = 0, j, k = 0, s = 0, l = 0, n = 0;
	char **c;

		if (str == NULL || str[0] == '\0')
		{
			return (NULL);
		}

		while (str[i])
		{
			while (str[i] == ' ' && str[i] != '\0')
			{
				i++;
			}
			if (str[i])
			{
				n++;
				while (str[i] != ' ')
				{
					i++;
				}
			}
		}

	c = malloc((n +1) * sizeof(char *));
	
		if (c == NULL)
		{
			return (NULL);
		}

	i = 0;

		while (str[i])
		{
			while (str[i] == ' ')
			{
				i++;
			}
			if (str[i])
			{
				s = i;
					while (str[i] != ' ')
					{
						i++;
					}
				l = i - s;
				c[k] = malloc(l + 1);

					if (c[k] == NULL)
					{
						for (j = 0; j < k; j++)
						{
        					free(c[j]);
    						free(c);
							return (NULL);
						}
					}
				_memcpy(c[k], str + s, l);
				c[k][l] = '\0';
				k++;
			}
		}
c[k] = NULL;
return (c);
}
