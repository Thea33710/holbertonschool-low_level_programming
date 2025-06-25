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

	for (c = 0; c < n; c++)
	{
		dest[i] = src[c];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
