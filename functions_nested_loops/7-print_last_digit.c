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
 ld = n % 10;
if (ld < 0)
{
ld = -ld;
}
_putchar(ld + '0');
return (ld);
}
