#include "main.h"

/**
 * is_palindrome - Entry point
 *
 * @s: string
 *
 * Return: Always 0 (Success)
 */

int is_palindrome(char *s)
{
  if (*s == '\0')
    {
      return (1);
    }
  if (*s != '\0')
    {
      if (is_palindrome(s) == is_palindrome(s + 1))
	{
	  is_palindrome(s +1);
	}
      if (is_palindrome(s) != is_palindrome(s + 1))
	{
	  return (0);
	}
    }
  return (1);
}
