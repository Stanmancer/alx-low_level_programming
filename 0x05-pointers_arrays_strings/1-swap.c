#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: pointer to value to be swapped
 * @b: pointer to value to be swapped
 *
 * return: void
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	int d = *b;

	*a = d;
	*b = c;
}
