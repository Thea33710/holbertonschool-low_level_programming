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

printf("%lu, %lu", j, k);
for (i = 0; i < 24; i++)
{
j += k;
k += j;
printf(", %lu, %lu", j, k);
}
printf("\n");
return (0);
}
