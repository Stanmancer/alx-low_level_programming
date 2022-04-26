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

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i < 0)
			{
				_putchar('-');
				i = (i * -1);

				if (i >= 100)
				{
					_putchar((i / 100) + '0');
					_putchar(((i / 10) % 10) + '0');
					_putchar((i % 10) + '0');
				}

				else if (i < 100 && i >= 10)
				{
					_putchar((i / 10) + '0');
					_putchar((i % 10) + '0');
				}

				else if (i < 10)
					_putchar(i + '0');
			}

			else if (i > 0 && i < 10)
				_putchar(i + '0');

			else if (i > 10)
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}
		}
	}

	if (n >= 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i >= 100)
			{
				_putchar((i / 100) + '0');
				_putchar(((i / 10) % 10) + '0');
				_putchar((i % 10) + '0');
			}

			else
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}
		}
	}

	while (n != 98)
	{
		_putchar(',');
		_putchar(' ');
	}
}
