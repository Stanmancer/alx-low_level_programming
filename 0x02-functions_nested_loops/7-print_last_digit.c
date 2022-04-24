#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @i: last digit of a number
 *
 * Return: always 1 success
 */

int print_last_digit(int i)
{
	int n;

	n = i % 10;

	if (n < 0)
	{
		_putchar((n * -1) + '0');
		return (n * -1);
	}
	else
	{
		_putchar(n + '0');
		return (n);
	}
}
