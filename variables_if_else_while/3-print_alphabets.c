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
int i;

for (c = 'a' ; c <= 'z' ; c++)
{
putchar(c);
}
for (c = 'A' ; c <= 'Z' ; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}
