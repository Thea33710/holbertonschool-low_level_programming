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
if (*s == '\0')
{
return (0);
}
return ((1) + _strlen_recursion(s + 1));
}

/**
 * _check_palindrome - Entry point
 *
 * @s: string
 * @start: nombre
 * @end: nombre
 *
 * Return: Always 0 (Success)
 */

int _check_palindrome(char *s, int start, int end)
{
if (start >= end)
return (1);
if (s[start] != s[end])
return (0);
return (_check_palindrome(s, start + 1, end - 1));
}

/**
 * is_palindrome - Entry point
 *
 * @s: string
 *
 * Return: Always 0 (Success)
 */

int is_palindrome(char *s)
{
int len = _strlen_recursion(s);
return (_check_palindrome(s, 0, len - 1));
}
