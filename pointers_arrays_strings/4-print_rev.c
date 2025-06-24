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
char *r = s;
char c;
while (*r != '\0')
{
r++;
}
r--;
while (r >= s)
{
c = *r;
_putchar(c);
r--;
}
_putchar('\n');
}

