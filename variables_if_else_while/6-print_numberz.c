#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: putchar
 * parameter: void
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char c;
for (c = '0' ; c <= '9' ; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}
