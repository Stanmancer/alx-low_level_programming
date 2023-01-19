#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes a function given as a
 *		parameter on each element of an array
 * @array: array of int passed to function
 * @size: size of the array
 * @action: function pointer passed to 'array_iterator'
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
