#include "main.h"

/**
 * rev_string - Entry point
 *
 * Description: reverse a string
 * @s: char
 *
 * Return: Always 0 (Success)
 */

void rev_string(char *s)
{
char c;
int i;
for (i = *s; i >= 0; i--)
{
c = *s;
_putchar(c);
*s--;
}
_putchar('\n');
}
