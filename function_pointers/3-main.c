#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

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
int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (-1);
	}

	op_func = get_op_func(argv[2]);

	if (op_func == NULL)
	{
		printf("Error\n");
		return (-1);
	}

arg_1 = atoi(argv[1]);
arg_2 = atoi(argv[3]);

	if ((argv[2][0] == '/' || argv[2][0] == '%') && arg_2 == 0)
	{
		printf("Error\n");
		return (-1);
	}

i = op_func(arg_1, arg_2);

printf("%d\n", i);

return (0);
}
