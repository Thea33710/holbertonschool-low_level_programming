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
if (n <= 0)
{
_putchar(n);
}
else
{
_putchar(-n);
}
return (0);
}
