#include "main.h"

/**
 * jack_bauer - Entry point
 *
 * Description: print 00:00 to 23:59
 * parameter: void
 *
 * Return: Always 0 (Success)
 */

void jack_bauer(void)
{
int i;
int j;
int k;
int l;

for (i = 0; i <= 1; i++)
{
_putchar(i);
for (j = 0; j <= 9; j++)
{
_putchar(j);
_putchar(':');
for (k = 0; k <= 5; k++)
{
_putchar(k);
for (l = 0; l <= 9; l++)
{
_putchar(l);
}
}
}
}
for (i = 2; i <= 2; i++)
{
_putchar(i);
for (j = 0; j <= 3; j++)
{
_putchar(j);
_putchar(':');
for (k = 0; k <= 5; k++)
{
_putchar(k);
for (l = 0; l <= 9; l++)
{
_putchar(l);
}
}
}
}
}
