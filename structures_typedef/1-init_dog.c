#include <stdlib.h>
#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initialize the specific struct dog with vzlues
 * @d: the dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
