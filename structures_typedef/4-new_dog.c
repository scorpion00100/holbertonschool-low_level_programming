#include <stdlib.h>
#include "dog.h"

/**
* new_dog - creates a new dog instance from the dog struct
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
* Return: ptr to a new dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	int d, name_size, owner_size;
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}

	name_size = sizeof(name) + 1;
	owner_size = sizeof(owner) + 1;

	new_dog->name = malloc(name_size);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	for (d = 0; name[d] != '\0'; d++)
		new_dog->name[d] = name[d];
	new_dog->name[d] = '\0';

	new_dog->age = age;

	new_dog->owner = malloc(owner_size);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	for (d = 0; owner[d] != '\0'; d++)
		new_dog->owner[d] = owner[d];
	new_dog->owner[d] = '\0';

	return (new_dog);
}
