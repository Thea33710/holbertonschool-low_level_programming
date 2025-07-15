#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Entry point
 *
 * @n: un entier constant
 * @separator: un séparateur
 *
 * Return: Always 0 (Success)
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int valeur;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		valeur = va_arg(args, int);
		printf("%d", valeur);

		if (separator != NULL && i < (n - 1))
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
