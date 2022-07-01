#include "main.h"
#include <stdlib.h>

/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @ptr: pointer to previously allocated memory
 * @old_size: size, in bytes, to the allocated space for ptr
 * @new_size: size, in bytes, of the new memory block
 *
 * Return: pointer to reallocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *realloc;
	char *clone;

	unsigned int a;

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	realloc = malloc(new_size);

	if (realloc == NULL)
		return (NULL);

	clone = ptr;

	for (a = 0; a < old_size; a++)
		realloc[a] = clone[a];

	free(ptr);
	return (realloc);
}
