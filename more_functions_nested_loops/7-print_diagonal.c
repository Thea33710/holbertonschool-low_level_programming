#include "main.h"

/**
 * print_diagonal - Entry point
 *
 * Description: print diagonale
 * @n: number
 *
 * Return: Always 0 (Success)
 */

void print_diagonal(int n)
{
int i;
int j = 0;
if (n <= 0)
{
_putchar('\n');
}
for (i = 0; i < n;)
{
_putchar('\\');
_putchar('\n');
i++;
j = 0;
while (j < i && i != n)
{
_putchar(' ');
j++;
}
}
}
