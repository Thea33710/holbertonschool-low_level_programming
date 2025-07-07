#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - Entry point
 *
 * Description: return the lenght of a string
 * @c: chaine de charactere
 *
 * Return: Always 0 (Success)
 */

int _strlen(char *c)
{
int i = 0;
while (*c != '\0')
{
c++;
i++;
}
return (i);
}

/**
 * *_strcpy - Entry point
 *
 * Description: copy un string par un pointeur
 * @dest: un string
 * @src: un string
 *
 * Return: Always 0 (Success)
 */

char *_strcpy(char *dest, char *src)
{
char *d = dest;
while (*src != '\0')
{
*dest = *src;
src++;
dest++;
}
*dest = '\0';
return (d);
}

/**
 * *new_dog - Entry point
 *
 * @name: chaine de charactere
 * @age: l age
 * @owner: un nom
 *
 * Return: Always 0 (Success)
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));
		if (new_dog == NULL)
		{
			return (NULL);
		}

	new_dog->name = malloc(_strlen(name) + 1);
		if (new_dog->name == NULL)
		{
			free(new_dog);
			return (NULL);
		}
	_strcpy(new_dog->name, name);

	new_dog->owner = malloc(_strlen(owner) + 1);
		if (new_dog->owner == NULL)
		{
			free(new_dog->name);
			free(new_dog);
			return (NULL);
		}
	_strcpy(new_dog->owner, owner);

	new_dog->age = age;

	return (new_dog);
}
