#include "main.h"

/**
 * print_sign - Entry point
 *
 * Description: dit si un nombre est positif, negatif ou est 0
 * @n: describe the parameter
 *
 * Return: Always 0 (Success)
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
if (n == 0)
{
_putchar('0');
return (0);
}
else
_putchar('-');
return (-1);
}
