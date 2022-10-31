#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free the dog struct
 * @d: var of the dog struct
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	else
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
