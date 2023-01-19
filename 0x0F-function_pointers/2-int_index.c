#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - searches for an integer
 * @array: an array of integers to search in
 * @size: no of elements in the array
 * @cmp: pointer to the funtion for comparison
 *
 * Return: the index of the integer when found,
 *		-1 if no element matches,
 *		-1 if size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, comp;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		comp = cmp(array[i]);

		if (comp != 0)
			return (i);
	}

	return (-1);
}
