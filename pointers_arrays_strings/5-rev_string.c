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
