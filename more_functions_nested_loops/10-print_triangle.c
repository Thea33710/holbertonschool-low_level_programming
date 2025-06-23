#include "main.h"

/**
 * print_triangle - Entry point
 *
 * Description: print triangle
 * @size: number
 *
 * Return: Always 0 (Success)
 */

void print_triangle(int size)
{
int i, j;
if (size <= 0)
{
_putchar('\n');
}
for (i = size; i > 0; i--)
{
j = 0;
while (j < i)
{
_putchar(' ');
j++;
}
while (j <= size)
{
_putchar('#');
j++;
}
_putchar('\n');
}
}
