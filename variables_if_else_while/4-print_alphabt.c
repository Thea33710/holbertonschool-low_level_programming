#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: alphabet without q and e
 * parameter: void
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char c;

for (c = 'a' ; c <= 'z'; c++)
{
if (c != 'q' && c != 'e')
{
putchar(c);
}
}
putchar('\n');
return (0);
}
