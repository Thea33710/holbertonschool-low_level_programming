#include "main.h"

/**
 * _puts_recursion - Entry point
 *
 * @s: string
 *
 * Return: Always 0 (Success)
 */

void _puts_recursion(char *s)
{
char c;
if (*s != '\0')
{
c = *s;
_putchar(c);
s++;
}
if (*s == '\0')
{
_putchar('\n');
return;
}
_puts_recursion(s);
}
