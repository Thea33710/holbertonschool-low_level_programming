#include <stdio.h>
#include <stdlib.h>
#include "main.h"

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
int i;
int j = *argv[2];
int k = *argv[3];
if (argc != 3)
{
printf("Error\n");
return (1);
}
else
{
i = j * k;
printf("%d\n", i);
}
return (0);
}
