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
if (c >= 97 && c <= 122)
{
_putchar('1');
}
else
{
_putchar('0');
}
}
