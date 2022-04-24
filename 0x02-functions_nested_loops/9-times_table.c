#include "main.h"

/**
 * times_table - prints the times table from 0 to 9
 *
 * return: always 1 success
 */

void times_table(void)
{
	int n;
	int i;

	for (n = 0; n <= 9; n++)
	{
		for (i = 0; i <= 9; i++)
		{
			_putchar(n * i);
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}

		_putchar('\n');

	}
}
