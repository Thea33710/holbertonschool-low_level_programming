#include "main.h"

/**
 * _isupper - Entry point
 *
 * Description: tell if a letter is in uppercase
 * @c: c takes a number
 *
 * Return: Always 0 (Success)
 */


int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else
return (0);
}
