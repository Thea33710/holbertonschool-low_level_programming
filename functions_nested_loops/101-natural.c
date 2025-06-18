#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: list and add the mutliples of 3 or 5 below 1024
 * parameter: void
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i;
int j = 0;

for (i = 0; i < 1024; i++)
{
if ((i % 3) == 0 || (i % 5) == 0)
{
j += i;
}
}
printf("%d\n", j);
return (0);
}
