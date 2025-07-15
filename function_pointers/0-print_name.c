#include "function_pointers.h"

/**
 * print_name - Entry point
 * @name: un nom
 * @f: pointeur vers une fonction
 *
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
