#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: pointer to aarray passed to function
 * @size: number of elements int the array
 * @cmp: function pointer to a function
 *
 * Return: index of the first element for which cmp does not return 0.
 * 	1, if no element matches and size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return(-1);

	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i);

	return (-1);
}
