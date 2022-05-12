#include "main.h"
#include <stdio.h>

/**
 * print_array - function to print `n` elements of an array
 * @a: array passed to the function
 * @n: number of elements required to print
 *
 * Return: no return
 */

void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		printf("%d", a[b]);

		if (b < n - 1)
			printf(", ");

	}
	printf("\n");
}
