#include "main.h"

/**
 * _strlen_recursion - Entry point
 *
 * @s: string
 *
 * Return: Always 0 (Success)
 */

int _strlen_recursion(char *s)
{
  int i = 0;
  if (*s != '\0')
    {
      i++;
      s++;
    }
  _strlen_recursion(s);
  return(i);
}
