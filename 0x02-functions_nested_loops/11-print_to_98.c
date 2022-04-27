#include "main.h"

/**
* print_to_98 - print all natural numbers from n to 98 in order
 * @n: number passed to function
 *
 * return: always 1
 */

void print_to_98(int n)
{
	int i;

	if (n == 98)
	{
		greater_than_98(n);
		_putchar('\n');
	} else
	{
		for (i = n; i <= 98; i++)
		{
			if (i < 0)
			{
				_putchar('-');
				r = (i * -1);

				if (r >= 100)
				{
					_putchar((r / 100) + '0');
					_putchar(((r / 10) % 10) + '0');
					_putchar((r % 10) + '0');
				} else if (r < 100 && r >= 10)
				{
					_putchar((r / 10) + '0');
					_putchar((r % 10) + '0');
				} else if (r < 10)
					_putchar(r + '0');
			} else if (r >= 0 && r < 10)
				_putchar(i + '0');
			else if (r >= 10)
			{
				_putchar((r / 10) + '0');
				_putchar((r % 10) + '0');
			}
			if (r != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		greater_than_98(n);
		_putchar('\n');
	}
}

/**
 * greater_than_98 - computes for values greater than 98
 * @n: number passed to function
 *
 * return: always 1
 */

void greater_than_98(int n)
{
	int i;

	if (n >= 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i >= 100)
			{
				_putchar((i / 100) + '0');
				_putchar(((i / 10) % 10) + '0');
				_putchar((i % 10) + '0');
			} else
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
