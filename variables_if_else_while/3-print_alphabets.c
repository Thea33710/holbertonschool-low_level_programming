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
c = '$';
for (i = 0 ; i < 2 ; i++)
{
putchar(c);
c = '\n';
}
return (0);
}
