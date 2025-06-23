#include "main.h"

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
