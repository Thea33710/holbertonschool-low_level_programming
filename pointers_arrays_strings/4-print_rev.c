#include "main.h"

/**
 * print_rev - Entry point
 *
 * Description: print a l'envers
 * @s: chaine de character
 *
 * Return: Always 0 (Success)
 */

void print_rev(char *s)
{
int i = 0;
int j;
char c;
while (*s != '\0')
{
i++;
s++;
}
for (j = 0; j < i; j++)
{
c = *s;
_putchar(c);
s--;
}
_putchar('\n');
}

