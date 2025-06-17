#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Entry point
 *
 * Description: 'the program's description'
 * @n: nombre
 *
 * Return: Always 0 (Success)
 */

void print_to_98(int n)
{
for (; n <= 98;)
{
for (; n <= 98; n++)
{
if (n != 98)
{
printf("%d, ", n);
}
if (n == 98)
{
printf("%d\n", n);
break;
}
}
}
for (; n >= 98; n--)
{
if (n != 98)
{
printf("%d, ", n);
}
if (n == 98)
{
printf("%d\n", n);
break;
}
}
}
