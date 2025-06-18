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
unsigned int j = 1;
unsigned int k = 2;

printf("%d, %d", j, k);
for (i = 0; i < 24; i++)
{
j += k;
k += j;
printf(", %d, %d", j, k);
}
printf("\n");
return (0);
}
