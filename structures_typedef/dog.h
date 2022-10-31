#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure for dogs
 * @name: first mber of stuct
 * @age: 2nd mber of sturct
 * @owner: 3ird mber of sturct
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
