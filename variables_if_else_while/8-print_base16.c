#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: afficher base 16
 * parameter: void
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char c;

for (c = '0'; c <= '9'; c++)
{
putchar(c);
}
for (c = 'a'; c <= 'f'; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}
