#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: putchar 0 to 9 with , and space
 * parameter: void
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i;
for (i = 48; i <= 57; i++)
{
putchar(i);
if (i < 57)
{
putchar(',');
putchar(' ');
}
else
{
putchar('\n');
}
}
return (0);
}
