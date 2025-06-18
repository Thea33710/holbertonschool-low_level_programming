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
int i;
unsigned long j = 1;
unsigned long k = 2;
unsigned long u = 0;

printf("%lu, %lu", j, k);
while (u < 4000000)
{
u = j + k;
if (u < 4000000)
{
printf(", %lu", u);
j = k;
k = u;
}
}
printf("\n");
return (0);
}
