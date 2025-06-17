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
if (n >= 0)
{
return (n % 10);
}
else
return (-n % 10);
}
