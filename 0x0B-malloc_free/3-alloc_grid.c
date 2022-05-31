#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2d array of integers
 * @width: no of coloums in the matrix
 * @height: no of rows in the matrix
 *
 * Return: NULL on failure. on success, return pointer to array.
 *	if width || height <= 0, return NULL
 */

int **alloc_grid(int width, int height)
{
	int i;
	int n;
	int **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = malloc(sizeof(int *) * height);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);

		if (ptr[i] == NULL)
		{
			for (; i >= 0; i--)
				free(ptr[i]);
			free(ptr);
			return (NULL);
		}
		
		for (n = 0; n < width; n++)
			ptr[i][n] = 0;
	}

	/*for (i = 0; i < height; i++)
		free(ptr[i]);*/

	return (ptr);
}
