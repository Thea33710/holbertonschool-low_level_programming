#include "3-calc.h"
#include <stddef.h>

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

	int i = 0, j;

	if (s == NULL)
	{
		return (NULL);
	}

	while (ops[i].op != NULL)
	{
		j = 1;

		if (ops[i].op[0] != s[0] || ops[i].op[1] != '\0' || s[1] != '\0')
		{
			j = 0;
		}

		if (j == 1)
		{
			return (ops[i].f);
		}

		i++;
	}

	return (NULL);
}
