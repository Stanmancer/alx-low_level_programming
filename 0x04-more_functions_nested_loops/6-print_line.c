#include "main.h"

/**
 * print_line - draws a straight line with lenght n
 * @n: number passed to function as lenght of line
 *
 * return: void
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i <= n; ++i)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
