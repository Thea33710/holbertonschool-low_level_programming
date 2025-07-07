#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/**
 * print_dog - Entry point
 *
 * @d: struct dog
 *
 * Return: Always 0 (Success)
 */

void print_dog(struct dog *d)
{

		if (d == NULL)
		{
			return;
		}

		if (d->name == NULL)
		{
			d->name = "(nil)";
		}

	printf("Name: %s\n", d->name);

		if (isnan(d->age))
		{
			printf("Age: (nil)\n");
		}
		else if (!isnan(d->age))
		{
			printf("Age: %f\n", d->age);
		}
		if (d->owner == NULL)
		{
			d->owner = "(nil)";
		}
	printf("Owner: %s\n", d->owner);
}
