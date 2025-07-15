#include "3-calc.h"
#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - Entry point
 * @argc: count arguments
 * @argv: array of pointer
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
int a, b, result, n, i = 0;
int (*op_func)(int, int);
char buf[10];

	if (argc != 4)
	{
		write(1, "Error\n", 6);
		exit(98);
	}

op_func = get_op_func(argv[2]);
	if (!op_func)
	{
		write(1, "Error\n", 6);
		exit(99);
	}

a = atoi(argv[1]);
b = atoi(argv[3]);

	if ((argv[2][0] == '/' || argv[2][0] == '%') && b == 0)
	{
		write(1, "Error\n", 6);
		exit(100);
	}

	result = op_func(a, b);
	n = result;

	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		if (n < 0)
		{
			_putchar('-');
			n = -n;
		}

		while (n > 0)
		{
			buf[i++] = (n % 10) + '0';
			n /= 10;
		}

		while (i--)
		{
			_putchar(buf[i]);
		}
	}

	_putchar('\n');
	return (0);
}
