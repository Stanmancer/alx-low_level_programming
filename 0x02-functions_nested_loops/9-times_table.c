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
	int r;

	for (n = 0; n <= 9; n++)
	{
		for (i = 0; i <= 9; i++)
		{
			r = n * i;

			if (r <= 9)
			{
				if (i == 0 && r == 0)
					_putchar(r + '0');
				else
				{
					_putchar(' ');
					_putchar(r + '0');
				}
			}
			else
			{
				_putchar((r / 10) + '0');
				_putchar((r % 10) + '0');
			}


			if (i < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
				_putchar('\n');
		}
	}
}
