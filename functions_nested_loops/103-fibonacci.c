#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 50 fibonacci
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
unsigned long j = 1;
unsigned long k = 2;
unsigned long u = 0;
unsigned long l = 0;

while (l < 4000000)
{
u = j + k;
j = k;
k = u;
if (u % 2 == 0)
{
l += u;
}
}
printf("%lu\n", l);
return (0);
}
