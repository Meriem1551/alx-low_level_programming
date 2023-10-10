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
	if (!(d->name))
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}
	printf("Age: %f\n", d->age);
	if (!(d->owner))
	{
		printf("Owner: (nil)");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}
}
