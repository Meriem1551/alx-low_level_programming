#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initialize a variable of type dog
 * @d: dog's details
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
