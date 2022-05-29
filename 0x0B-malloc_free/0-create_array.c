#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars, and initializes it
 * with a specific char
 * @size: size of array
 * @c: specific char to be initialized
 *
 * Return: pointer to the array or NULL if size = 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
		return (NULL);

	ptr = malloc(sizeof(char) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}

	return (ptr);
}
