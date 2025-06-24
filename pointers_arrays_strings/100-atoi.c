#include "main.h"

/**
 * _atoi - Entry point
 * @s: a string
 *
 * Return: The integer converted from the string
 */

int _atoi(char *s)
{
int c = 0;
unsigned int j = 0;
int k = 1;
int p = 0;
while (s[c])
{
if (s[c] == 45)
{
k *= -1;
}
while (s[c] >= 48 && s[c] <= 57)
{
p = 1;
j = (j * 10) + (s[c] - '0');
c++;
}
if (p == 1)
{
break;
}
c++;
}
j *= k;
return (j);
}
