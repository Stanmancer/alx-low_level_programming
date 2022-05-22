#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the two diagonals of a
 * square matrix.
 * @a: the matrix passed to the function
 * @size: size of the square matrix
 */

void print_diagsums(int *a, int size)
{
	int i;
	int ld;
	int rd;

	ld = 0;
	rd = 0;

	for (i = 0; i < size; i++)
	{
		ld += a[i];
		rd += a[size - i - 1];
		a += size;
	}
	printf("%d, %d\n", ld, rd);
}
