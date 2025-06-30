#include "main.h"

/**
 * _strspn - Entry point
 *
 * Description: strspn
 * @s: string
 * @accept: string
 *
 * Return: Always 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int n = 0;
int i;
while (*s != '\0')
{
char *c = accept;
i = 0;
while (*c != '\0')
{
if (*s == *c)
{
i = 1;
break;
}
c++;
}
if (i == 1)
{
n++;
}
else if (i == 0)
{
return (n);
}
s++;
}
return (n);
}
