#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Description: print alphabet x10
 * parameter: void
 *
 * Return: Always 0 (Success)
 */


void print_alphabet_x10(void)
{
char c;
int i;
for (i = 0 ; i <= 9 ; i++)
{
for (c = 'a' ; c <= 'z' ; c++)
{
_putchar(c);
}
_putchar('\n');
}
}
