#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers and fills it with integers from
 *	min to max
 * @min: minimum value passed to function
 * @max: maximum value passed to function
 *
 * Return: on success, pointer to created array
 *	on failure or if min > max, NULL
 */

int *array_range(int min, int max)
{
	int i;
	int *ptr;

	if (min > max)
		return (NULL);

	/* memory alloc */
	ptr = malloc(sizeof(*ptr) * (max - min + 1));

	if (ptr == NULL)
		return (NULL);

	/* filling array */
	for (i = 0; min <= max; i++)
	{
		ptr[i] = min;
		min++;
	}

	return (ptr);
}
