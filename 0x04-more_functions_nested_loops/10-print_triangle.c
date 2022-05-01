#include "main.h"

/**
 * print_triangle - prints a triangle with given size
 * @size: number passed to function as size of the triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int s; /*for space iteration*/
	int h; /*for # iteration*/
	int i; /*for vertical iteration*/

	if (size > 0)
	{
		for (h = 1; h <= size; h++)
		{
			s = size - h;
			do {
				_putchar(' ');
				s--;
			} while (s > 0);
			for (i = h; i > 0; i--)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
