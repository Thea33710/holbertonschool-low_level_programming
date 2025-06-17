#include "main.h"

/**
 * print_last_digit - Entry point
 *
 * Description: print last digit
 * @n: number
 *
 * Return: Always 0 (Success)
 */

int print_last_digit(int n)
{
int ld;
if (n >= 0)
{
ld = n % 10;
}
if (n < 0)
{
n = -n;
ld = (n % 10);
}
_putchar(ld + '0');
return (ld);
}
