#include "main.h"

/**
 * _help - Entry point
 *
 * @i: entier
 * @n: entier
 *
 * Return: Always 0 (Success)
 */

int _help(int i, int n)
{
if ((i * i) == n)
{
return (i);
}
else if ((i * i) > n)
{
return (-1);
}
else
return (_help(i + 1, n));
}

/**
 * _sqrt_recursion - Entry point
 *
 * @n: entier
 *
 * Return: Always 0 (Success)
 */

int _sqrt_recursion(int n)
{
if (n == 0 || n == 1)
{
return (n);
}
if (n < 0)
{
return (-1);
}
return (_help(1, n));
}
