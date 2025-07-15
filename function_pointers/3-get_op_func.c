#include "3-calc.h"
#include <stddef.h>

/**
 * _strcmp - Entry point
 *
 * Description: compare 2 string
 * @s1: string
 * @s2: string
 *
 * Return: Always 0 (Success)
 */

int _strcmp(char *s1, char *s2)
{
int i, k;
for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
{
k = s1[i] - s2[i];
if (k != 0)
{
return (k);
}
}
return (k);
}

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

	while (ops[i].op != NULL && _strcmp(ops[i].op, s) != 0)
	{
		i++;
	}

	return (ops[i].f);
}
