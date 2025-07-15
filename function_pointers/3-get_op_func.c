#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * get_op_func - Entry point
 * @s: un string
 *
 * Return: Always 0 (Success)
 */

int (*get_op_func(char *s))(int, int)
{

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	if (s == NULL)
	{
		return (NULL);
	}

	while (ops[i].op < 5 && ops[i].op != s)
	{
		i++;
	}

	return (ops[i].f);
}
