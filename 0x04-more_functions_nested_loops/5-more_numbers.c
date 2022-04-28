#include "main.h"

/**
 * more_numbers - prints 10 times the number from 0 to 14
 *
 * Return: void
 */

void more_numbers(void)
{
	int a;
	int b = 0;

	do {
		for (a = 0; a <= 14; a++)
		{
			if (a > 9)
				_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
		}
		_putchar('\n');
		b++;
	} while (b != 10);
}
