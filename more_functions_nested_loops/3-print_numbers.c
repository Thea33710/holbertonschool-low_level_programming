#include "main.h"

/**
 * print_numbers - Entry point
 *
 * Description: print 0 to 9
 * parameter: void
 *
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{
int i;
for (i = 0; i <= 9 ; i++)
{
_putchar(i + '0');
}
_putchar('\n');
}
