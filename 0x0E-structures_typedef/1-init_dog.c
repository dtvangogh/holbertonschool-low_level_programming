#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - define struct dog
 * @d: name of struct
 * @name: name of dog
 * @age: age of dog
 * @owner: ownder of dog
 */


void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
