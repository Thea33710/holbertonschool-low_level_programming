#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Entry point
 *
 * @n: un entier constant
 * @separator: un séparateur
 *
 * Return: Always 0 (Success)
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *c;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		c = va_arg(args, char*);

		if (c == NULL)
		{
			c = "(nil)";
		}
		printf("%s", c);

		if (separator != NULL && i < (n - 1))
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
