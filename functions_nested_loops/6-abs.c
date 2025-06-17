#include "main.h"

/**
 * _abs - Entry point
 *
 * Description: absolu d'un nombre
 * @n: un nombre
 *
 * Return: Always 0 (Succes)
 *
 */

int _abs(int n)
{
if (n >= 0)
{
return (n);
}
else
{
_putchar('-');
return (n);
}
}
