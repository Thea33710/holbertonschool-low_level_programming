#include "main.h"

/**
 * _atoi - Entry point
 *
 * Description: 'the program's description'
 * @s: char
 *
 * Return: Always 0 (Success)
 */

int _atoi(char *s)
{
char c, k;

while (*s != '\0')
{
if (*s == '-' || *s == '+')
{
c = *s;
}
_putchar(c);
if (*s >= '0'  && *s <= '9')
{
k = *s;
_putchar(k + '0');
}
s++;
}
_putchar('\n');
return (0);
}

