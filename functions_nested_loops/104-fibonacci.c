#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 98 fibonacci
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
for (i = 2; i < 98; i++)
{
u = j + k;
printf(", %lu", u);
j = k;
k = u;
}
printf("\n");
return (0);
}
