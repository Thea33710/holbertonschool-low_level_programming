#include "main.h"

/**
 * _islower - Entry point
 *
 * Description: tell if a letter is in lowercase
 * @c: c takes a number
 *
 * Return: Always 0 (Success)
 */


int _islower(int c)
{
char u;
u = c;
if (u >= 97 && u <= 122)
{
_putchar('1');
}
if (u < 97 && u > 122)
{
_putchar('0');
}
return (0);
}
