#include "main.h"

/**
 * factorial - Entry point
 *
 * @n: un entier
 *
 * Return: Always 0 (Success)
 */

int factorial(int n)
{
if (n <= 0)
{
return (-1);
}
if (n <= 1)
{
return (1);
}
return (n * factorial(n - 1));
}
