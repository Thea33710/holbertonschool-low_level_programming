#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * is_number - Entry point
 *
 * @str: string
 *
 * Return: Always 0 (Success)
 */

int is_number(char *str)
{
if (*str == '\0')
{
return (0);
}
while (*str)
{
if (!isdigit(*str))
{
return (0);
}
str++;
}
return (1);
}


/**
 * main - Entry point
 *
 * @argc: count arguments
 * @argv: array of pointer
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
int n = 0;
int i, j;

if (argc == 1)
{
printf("0\n");
return (0);
}
for (i = 1; i < argc; i++)
{
if (!is_number(argv[i]))
{
printf("Error\n");
return (1);
}
j = atoi(argv[i]);
if (j < 0 || j > INT_MAX)
{
printf("Error\n");
return (1);
}
n += j;
}
printf("%d\n", n);
return (0);
}
