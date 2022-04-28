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
	int d;

	if (n > 0)
	{
		for (s = 0; s < n; s++)
		{
			if (s != 0)
			{
				d = s;
				do {
					_putchar(' ');
					d--;
				} while (d != 0);
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
