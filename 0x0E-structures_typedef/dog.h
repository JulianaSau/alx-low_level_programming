#ifndef DOG_H
#define DOG_H

/**
 * struct dog - contains a struct for dog characteristics
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the dog's owner
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
 * dog_t - a new name for the type struct dog
 */

typedef struct dog dog_t;

#endif
