#ifndef DOG_H
#define DOG_H

/**
 * struct dog - un chien
 * @name: son nom
 * @age: son age
 * @owner: son proprietaire
 *
 * Description: Longer description
 */

struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);


#endif
