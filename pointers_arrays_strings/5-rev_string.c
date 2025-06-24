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
while (*s >= 0)
{
c = *s;
_putchar(c);
s--;
}
_putchar('\n');
}
