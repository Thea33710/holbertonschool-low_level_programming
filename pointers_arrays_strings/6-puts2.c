#include "main.h"

/**
 * puts2 - Entry point
 *
 * Description: prints
 * @str: chaine de character
 *
 * Return: Always 0 (Success)
 */

void puts2(char *str)
{
char c;
int i = 1;
while (*str != '\0')
{
c = *str;
if (i == 1)
{
_putchar(c);
i = 2;
}
else
{
i = 1;
}
str++;
}
_putchar('\n');
}
