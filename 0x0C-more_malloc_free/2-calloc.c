#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements in the array
 * @size: byte size of each element in the array
 *
 * Return: on success, pointer to the allocated memory
 *	on failure or if nmemb || size == 0, returns NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int a;
	int b;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	b = nmemb * size;

	/* memory allocation */
	ptr = malloc(b);

	if (ptr == NULL)
		return (NULL);

	/* initializing memory with zero(0) */
	for (a = 0; a < b; a++)
		ptr[a] = 0;

	return (ptr);
}
