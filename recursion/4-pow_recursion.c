#include "main.h"

/**
 * _pow_recursion - Entry point
 *
 * @x: entier
 * @y: entier
 *
 * Return: Always 0 (Success)
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
if (x == 0)
{
return (0);
}
if (x == 0 && y == 0)
{
return (1);
}
return (x * _pow_recursion(x ,(y - 1)));
}
