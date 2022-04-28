#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal with lenght n
 * @n: number passed to function as lenght
 *
 * return: void
 */

void print_diagonal(int n)
{
	int s;

	if (n > 0)
	{
		for (s = 0; s < n; s++)
		{
			if (s != 0)
			{
				do {
					_putchar(' ');
					s--;
				} while (s != 0);
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
