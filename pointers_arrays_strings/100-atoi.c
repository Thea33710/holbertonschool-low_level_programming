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
int i = 0;
int j;
char c, k;

while (*s != '\0')
{
s++;
i++;
}
for (j = 0; j < i; j++)
{
if (*s == '-' || *s == '+')
{
c = *s;
}
if (c != 0)
{
_putchar(c);
}
if (*s >= 0  && *s <= 9)
{
k = *s;
_putchar(k + '0');
}
s++;
}
_putchar('\n');
return (0);
}

