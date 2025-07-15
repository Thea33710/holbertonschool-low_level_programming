#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - Entry point
 * @a: entier
 * @b: entier
 *
 * Return: Always 0 (Success)
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Entry point
 * @a: entier
 * @b: entier
 *
 * Return: Always 0 (Success)
 */

int  op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Entry point
 * @a: entier
 * @b: entier
 *
 * Return: Always 0 (Success)
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Entry point
 * @a: entier
 * @b: entier
 *
 * Return: Always 0 (Success)
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - Entry point
 * @a: entier
 * @b: entier
 *
 * Return: Always 0 (Success)
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
