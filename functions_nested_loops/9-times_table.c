#include "main.h"

/**
 * times_table - Entry point
 *
 * Description: table de multiplication
 * parameter: void
 *
 * Return: Always 0 (Success)
 */

void times_table(void)
{
int i;
int j;
int k;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
k = i * j;
if (j != 0 && k <= 9)
{
_putchar(' ');
_putchar(' ');
}
if (k != 0 && k > 9)
{
_putchar(' ');
}
if (k <= 9)
{
_putchar(k + '0');
}
if (k > 9)
{
_putchar(k / 10 + '0');
_putchar(k % 10 + '0');
}
if (j != 9)
{
_putchar(',');
}
}
_putchar('\n');
}
}
