#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - funtion that frees dogs
 * @d: pointer to alloc'd dog 
 *
 * Return: nothing
 */

void free_dog(gog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
