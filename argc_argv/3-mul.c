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
int i, arg_1, arg_2;
if (argc != 3)
{
printf("Error\n");
return (1);
}
else
{
arg_1 = atoi(argv[1]);
arg_2 = atoi(argv[2]);
i = arg_1 *arg_2;
printf("%d\n", i);
}
return (0);
}
