#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @i: last digit of a number
 *
 * Return: always 1 success
 */

int print_last_digit(int i)
{
	if ((i % 10) < 0)
	{
		_putchar((i % 10) * -1);
		return ((i % 10) * -1);
	}
	else
	{
		_putchar(i % 10);
		return (i % 10);
	}
}
