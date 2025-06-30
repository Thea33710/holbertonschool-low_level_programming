#include "main.h"

/**
 * _memset - Entry point
 *
 * @s: string
 * @b: char
 * @n: nombre positif
 *
 * Return: Always 0 (Success)
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
*s = b;
s++;
}
return (s);
}
