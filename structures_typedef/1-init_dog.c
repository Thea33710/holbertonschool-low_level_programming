#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * init_dog - Entry point
 *
 * @d: struct dog
 * @name: chaine de charactere
 * @age: l age
 * @owner: un nom
 *
 * Return: Always 0 (Success)
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
		if (d == NULL)
		{
			return;
		}

	d->name = name;
	d->age = age;
	d->owner = owner;
}
