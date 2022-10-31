#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print elements of dog sturct
 * @d: var of dog stuct
 * Return: nothing
 */

void print_dog(struct dog *d)
{
if (d == NULL)
	return;

else
	{
	if (d->name != NULL)
		printf("Name: %s\n", d->name);
	else
		printf("Name: (nil)\n");

	if (d->age != 0)
		printf("Age: %f\n", d->age);
	else
		printf("Age: (nil)\n");

	if (d->owner != NULL)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: (nil)\n");
	}
}
