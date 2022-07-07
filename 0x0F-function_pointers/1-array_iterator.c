#include "function_pointers.h"

/**
 * array_iterator - executes a function givenn as a parameter on each element
 * 			of an array
 * @array: pointer to array passed to function
 * @size: size of the array
 * @action: function pointer passed to function
 *
 * Return: Void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
