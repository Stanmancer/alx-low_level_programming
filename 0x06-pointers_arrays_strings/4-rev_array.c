#include "main.h"

/**
 * reverse_array - function to reverse the content of an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int c;
	int tmp;

	n -= 1;

	for (c = 0; c < n; c++)
	{
		tmp = a[c];
		a[c] = a[n];
		a[n] = tmp;
		n--;
	}
}
