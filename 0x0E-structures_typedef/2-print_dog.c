#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - prints information about the dog
 * @d: the dog structure
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(0);
	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
