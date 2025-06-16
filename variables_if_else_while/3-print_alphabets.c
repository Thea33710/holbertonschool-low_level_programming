#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: a to Z
 * parameter: void
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char c;

for (c = 'a' ; c <= 'Z' ; c++)
{
putchar(c);
}
putchar('$');
putchar('\n');
return (0);
}
