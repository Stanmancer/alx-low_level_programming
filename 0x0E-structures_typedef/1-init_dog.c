#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializing a variable of type struct dog
 * @d: pointer to struct dog
 * @name: pointer to name to initialize
 * @age: pointer to age to initialize
 * @owner: pointer to owner to initialized
 *
 * Return: nothimg
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
