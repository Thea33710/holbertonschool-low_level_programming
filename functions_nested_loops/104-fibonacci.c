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
unsigned long j_1 = 0;
unsigned long j_2 = 1;
unsigned long k_1 = 0;
unsigned long k_2 = 2;
unsigned long u_1 = 0;
unsigned long u_2 = 0;

printf("%lu, %lu", j_2, k_2);
for (i = 3; i <= 92; i++)
{
u_2 = j_2 + k_2;
printf(", %lu", u_2);
j_2 = k_2;
k_2 = u_2;
}

j_1 = j_2 / 1000000000;
j_2 = j_2 % 1000000000;
k_1 = k_2 / 1000000000;
k_2 = k_2 % 1000000000;

for (i = 93; i <= 98; i++)
{
u_1 = j_1 + k_1;
u_2 = j_2 + k_2;
if (u_2 >= 1000000000)
{
u_1 += 1;
u_2 -= 1000000000;
}
printf(", %lu%09lu", u_1, u_2);
j_1 = k_1;
j_2 = k_2;
k_1 = u_1;
k_2 = u_2;
}
printf("\n");
return (0);
}
