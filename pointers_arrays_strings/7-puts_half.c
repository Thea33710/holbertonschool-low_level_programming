#include "main.h"

/**
 * puts_half - Entry point
 *
 * Description: 'the program's description'
 * @str: chaine de character
 *
 * Return: Always 0 (Success)
 */

void puts_half(char *str)
{
int j = 0;
int i = 0;
char *copy = str;
char c;
while (*copy != '\0')
{
copy++;
i++;
}
while (*str != '\0')
{
if (j >= (i / 2))
{
c = *str;
_putchar(c);
}
j++;
str++;
}
_putchar('\n');
}
