#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints a struct dog
 * @d: dog's details(pointer)
 */
void print_dog(struct dog *d)
{
if (d)
{
if (d->name == NULL)
{
printf("Name: (nil)\n");
return;
}
else if (d->owner == NULL)
{
printf("Owner: (nil)\n");
return;
}
else
{
printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner);
}
}
}
