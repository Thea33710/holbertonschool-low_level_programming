#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * main - Entry point
 * @argc: count arguments
 * @argv: array of pointer
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	int i, arg_1, arg_2, signe;

	if (argc < 3)
	{
		printf("Error\n");
		return (0);
	}

arg_1 = atoi(argv[1]);
arg_2 = atoi(argv[3]);
signe = argv[2];

i = (get_op_func(signe)) (arg_1, arg_2);

printf("%d\n", i);

return (0);
}
