#include "main.h"

/**
 * jack_bauer - prints every minute from 00:00 to 23:59
 *
 * return: always 1 success
 */

void jack_bauer(void)
{
	int i;
	int a;

	for (i = 0; i < 24; i++)
	{
		for (a = 0; a < 60; a++)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
			_putchar('\n');
		}

		if (a == 59)
		{
			a = 0;
		}
	}
}
