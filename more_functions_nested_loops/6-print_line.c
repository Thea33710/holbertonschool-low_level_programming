#include "main.h"

/**
 * print_line - Entry point
 *
 * Description: print lines of _
 * @n: number
 *
 * Return: Always 0 (Success)
 */

void print_line(int n)
{
int i;
for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
