#include "main.h"

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
