#include "main.h"

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
