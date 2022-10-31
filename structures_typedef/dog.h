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

/**
* struct dog_t - Def the dog structure
* @name: Name of the dog
* @age: The age of the dog
* @owner: The name of the owner of the dog
*/

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
