#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees previosly allocated 2d array in alloc_grid function
 * @grid: pointer to 2d array
 * @height: no of rows of the array
 *
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
