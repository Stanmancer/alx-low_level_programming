#include "main.h"

/**
 * print_chessboard - function that prints the chessboard
 * @a: the matrix passed to function
 *
 * Return: nothing
 */

void print_chessboard(char (*a)[8])
{
	int i;/* row iteration */
	int j;/* column iteration */

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
