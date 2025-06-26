#include "main.h"

/**
 * *leet - Entry point
 *
 * Description: exchange lettres by numbers
 * @s: string
 *
 * Return: Always 0 (Success)
 */

char *leet(char *s)
{
int i;
char *c = s;
char a[] = {'a', 'e', 'o', 't', 'l'};
char b[] = {4, 3, 0, 7, 1};

while (*s)
{
for (i = 0; i < 5; i++)
{
if (*s == a[i] || *s == a[i] - 32)
{
*s =  b[i] + '0';
}
}
s++;
}
return (c);
}
